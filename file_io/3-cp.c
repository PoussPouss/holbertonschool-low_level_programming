#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_checked - Ferme un descripteur de fichier avec vérification
 * @fd: Descripteur à fermer
 */
void close_checked(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_args - Vérifie les arguments et ouvre les fichiers
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 * @fd_from: Pointeur vers le descripteur du fichier source
 * @fd_to: Pointeur vers le descripteur du fichier destination
 */
void check_args(int argc, char *argv[], int *fd_from, int *fd_to)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
}

/**
 * main - Programme qui copie le contenu d'un fichier vers un autre
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	int fd_from = -1, fd_to = -1;
	ssize_t n_read, n_write;
	char buffer[1024];

	check_args(argc, argv, &fd_from, &fd_to);

	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (fd_to == -1 || n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}

	close_checked(fd_from);
	close_checked(fd_to);
	return (0);
}

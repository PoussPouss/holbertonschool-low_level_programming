#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* error_file - Gère les erreurs liées aux fichiers et quitte le programme
* @fd: Descripteur du fichier source
* @file_to: Descripteur du fichier destination
* @argv: Arguments du programme
* @code: Code d'erreur
*/
void error_file(int fd, int file_to, char *argv[], int code)
{
	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (fd != -1)
			close(fd);
		exit(98);
	}
	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (fd != -1)
			close(fd);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
	if (code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* open_files - Ouvre les fichiers source et destination
* @argv: Arguments du programme
* @file_from: Pointeur vers le descripteur du fichier source
* @file_to: Pointeur vers le descripteur du fichier destination
*/
void open_files(char *argv[], int *file_from, int *file_to)
{
	*file_to = -1;
	*file_from = open(argv[1], O_RDONLY);
	if (*file_from == -1)
		error_file(*file_from, *file_to, argv, 98);

	*file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*file_to == -1)
		error_file(*file_from, *file_to, argv, 99);
}

/**
* copy_content - Copie le contenu d'un fichier à l'autre
* @file_from: Descripteur du fichier source
* @file_to: Descripteur du fichier destination
* @argv: Arguments du programme
*/
void copy_content(int file_from, int file_to, char *argv[])
{
	ssize_t n_read, n_write;
	char buffer[1024];

	while ((n_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		n_write = write(file_to, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
			error_file(file_from, file_to, argv, 99);
	}

	if (n_read == -1)
		error_file(file_from, file_to, argv, 98);
}

/**
* close_files - Ferme les descripteurs de fichiers
* @file_from: Descripteur du fichier source
* @file_to: Descripteur du fichier destination
* @argv: Arguments du programme
*/
void close_files(int file_from, int file_to, char *argv[])
{
	if (close(file_from) == -1)
		error_file(file_from, -1, argv, 100);

	if (close(file_to) == -1)
		error_file(file_to, -1, argv, 100);
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
	int file_from = -1, file_to = -1;

	/* Vérifie le nombre d'arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(argv, &file_from, &file_to);
	copy_content(file_from, file_to, argv);
	close_files(file_from, file_to, argv);

	return (0);
}

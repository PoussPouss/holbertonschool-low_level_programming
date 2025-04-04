#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_handler - Gère les erreurs et quitte le programme
 * @code: Code d'erreur (97, 98, 99, 100)
 * @message: Message d'erreur
 * @fn: Nom de fichier ou valeur FD à afficher
 * @fd_from: Descripteur du fichier source à fermer si != -1
 * @fd_to: Descripteur du fichier destination à fermer si != -1
 */
void error_handler(int code, char *message, char *fn, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, fn);

	if (fd_from != -1)
		close(fd_from);
	if (fd_to != -1)
		close(fd_to);

	exit(code);
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
	char fd_str[20];

	/* Vérification des arguments */
	if (argc != 3)
		error_handler(97, "Usage: cp file_from file_to", "", -1, -1);

	/* Ouverture du fichier source */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(98, "Error: Can't read from file ", argv[1], -1, -1);

	/* Ouverture/création du fichier destination */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler(99, "Error: Can't write to ", argv[2], fd_from, -1);
	/* Copie du contenu */
	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
			error_handler(99, "Error: Can't write to ", argv[2], fd_from, fd_to);
	}
	/* Erreur de lecture */
	if (n_read == -1)
		error_handler(98, "Error: Can't read from file ", argv[1], fd_from, fd_to);
	/* Fermeture des fichiers */
	if (close(fd_from) == -1)
	{
		sprintf(fd_str, "%d", fd_from);
		error_handler(100, "Error: Can't close fd ", fd_str, -1, fd_to);
	}
	if (close(fd_to) == -1)
	{
		sprintf(fd_str, "%d", fd_to);
		error_handler(100, "Error: Can't close fd ", fd_str, -1, -1);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* error_exit - Gère les erreurs et quitte le programme avec un code
* @code: Code de sortie
* @message: Message d'erreur à afficher
* @file: Nom du fichier concerné
*/
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file);
	exit(code);
}

/**
* main - Programme principal pour copier le contenu d'un fichier vers un autre
* @argc: Nombre d'arguments
* @argv: Tableau des arguments
*
* Return: 0 en cas de succès, ou un code d'erreur en cas d'échec
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, read_count, write_count;

	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", "");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file ", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to ", argv[2]);

	while ((read_count = read(file_from, buffer, 1024)) > 0)
	{
		write_count = write(file_to, buffer, read_count);
		if (write_count != read_count)
			error_exit(99, "Error: Can't write to ", argv[2]);
	}

	if (read_count == -1)
		error_exit(98, "Error: Can't read from file ", argv[1]);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd ", argv[1]);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd ", argv[2]);

	return (0);
}

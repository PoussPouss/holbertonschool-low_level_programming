#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* error_exit - Affiche un message d'erreur et quitte le programme
* @message: Message d'erreur à afficher
* @code: Code de sortie
*/
void error_exit(char *message, int code)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
* open_files - Ouvre les fichiers source et destination
* @argv: Arguments du programme
* @file_from: Pointeur vers le descripteur du fichier source
* @file_to: Pointeur vers le descripteur du fichier destination
*/
void open_files(char *argv[], int *file_from, int *file_to)
{
	*file_from = open(argv[1], O_RDONLY);
	if (*file_from == -1)
		error_exit("Error: Can't read from file ", 98);

	*file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*file_to == -1)
	{
		close(*file_from);
		error_exit("Error: Can't write to file ", 99);
	}
}

/**
* copy_content - Copie le contenu d'un fichier à l'autre
* @file_from: Descripteur du fichier source
* @file_to: Descripteur du fichier destination
*/
void copy_content(int file_from, int file_to)
{
	ssize_t n_read, n_write;
	char buffer[1024];

	while ((n_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		n_write = write(file_to, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
			error_exit("Error: Can't write to file ", 99);
	}
	if (n_read == -1)
		error_exit("Error: Can't read from file ", 98);
}

/**
* close_files - Ferme les descripteurs de fichiers
* @file_from: Descripteur du fichier source
* @file_to: Descripteur du fichier destination
*/
void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
		error_exit("Error: Can't close fd ", 100);

	if (close(file_to) == -1)
		error_exit("Error: Can't close fd ", 100);
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
	int file_from, file_to;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97);

	open_files(argv, &file_from, &file_to);
	copy_content(file_from, file_to);
	close_files(file_from, file_to);

	return (0);
}

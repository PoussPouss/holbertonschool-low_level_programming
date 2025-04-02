#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Crée un fichier avec le contenu spécifié
 * @filename: Nom du fichier à créer
 * @text_content: Chaîne de caractères terminée par NULL
 *
 * Description: Cette fonction crée un fichier avec les permissions rw-------
 * Si text_content est NULL, un fichier vide est créé.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	int write_status;

	int text_length = 0;

	if (filename == NULL)
	return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
		text_length++;

		write_status = write(file_descriptor, text_content, text_length);
		if (write_status == -1 || write_status != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (-1);
}

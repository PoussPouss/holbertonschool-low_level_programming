#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier
 * @filename: Nom du fichier à modifier
 * @text_content: Chaîne de caractères terminée par NULL à ajouter
 *
 * Description: Cette fonction ouvre un fichier existant et ajoute
 * le texte spécifié à la fin.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_status;
	int text_length = 0;


	if (filename == NULL)
		return (-1);


	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);


	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}


	while (text_content[text_length])
		text_length++;


	write_status = write(file_descriptor, text_content, text_length);


	close(file_descriptor);


	if (write_status == -1 || write_status != text_length)
		return (-1);

	return (1);
}

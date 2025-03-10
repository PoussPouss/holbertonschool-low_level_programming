#include "main.h"
#include <stdlib.h>
/**
* _strdup - Creates an array of chars and initializes it with a char
* @str: The size of the array
* Return: Pointer to the array, or NULL if it fails
*/

char *_strdup(char *str)
{
	char *dup_str;

	int i;
	int length = 0;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	length++;

	dup_str = malloc((length + 1) * sizeof(char));

	if (dup_str == NULL)
	return (NULL);

	for (i = 0; i < length; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[i] = '\0';

	return (dup_str);

}



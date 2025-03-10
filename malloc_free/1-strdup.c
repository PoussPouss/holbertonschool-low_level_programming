#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - Creates an array of chars and initializes it with a char
* @str: The size of the array
* Return: Pointer to the array, or NULL if it fails
*/

char *_strdup(char *str)
{
	char *dup_str;

	int i;

	if (str == NULL)
	return (NULL);

	dup_str = malloc((strlen(str) + 1) * sizeof(char));

	if (dup_str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[i] = '\0';

	return (dup_str);

}



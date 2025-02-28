#include "main.h"
/**
 * cap_string - Capitalise la première lettre de chaque mot d'une chaîne.
 * @str: La chaîne à traiter.
 * Return: La chaîne modifiée.
 */
char *cap_string(char *str)
{
int i;
int in_word = 0;
int j;
int is_separator;
char separators[] = {',', ';', '.', '!', '?', '"', '
(', ')', '{', '}', ' ', '\t', '\n'};

if (str[0] >= 'a' && str[0] <= 'z')
	{
str[0] = str[0] - 32;
}
	for (i = 0; str[i] != '\0'; i++)
	{
		is_separator = 0;

	for (j = 0; separators[j] != '\0'; j++)
	{
		if (str[i] == separators[j])
		{
		is_separator = 1;
		break;
		}
	}

	if (is_separator)
	{
	in_word = 0;
	}
	else if (str[i] >= 'a' && str[i] <= 'z' && in_word == 0)
	{
		str[i] = str[i] - 32;
	in_word = 1;
	}
	else
	{
	in_word = 1;
	}
	}

return (str);
}

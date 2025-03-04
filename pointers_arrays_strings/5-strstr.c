#include "main.h"
#include <stdio.h>
/**
*_strstr - prototype contenant mes chaines de caractères
*@haystack: première chaine de caractère
*@needle: chaine a trouver dans haystack
*Return: value of my needle string
 */
char *_strstr(char *haystack, char *needle)

{
	int i = 0;
	int j;

	if (*needle == '\0')
	return (haystack);

	while (haystack[i] != '\0')
	{
	j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
			j++;
			}
			if (needle[j] == '\0')
				{
				return (haystack + i);
				}
		}
	i++;
	}
	return (NULL);
}




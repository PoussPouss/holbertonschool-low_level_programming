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

	while (haystack[i] != '\0')
	{
	j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] != haystack[i])
			{
				if (haystack[i] == needle[j])
				j++;
			}
			return (haystack + i);
		}
		i++;
	}
	return (NULL);

}

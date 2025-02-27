#include "main.h"
/**
*_strcat - prototype string character
*@dest: pointeurs variable
*@src: variable
*Return: initial dest
*/

char *_strcat(char *dest, char *src)
{

int j = 0;

int i = 0;

	while (dest[j] != '\0')
	{
	j++;
	}
	while (src[i] != '\0')
	{
	dest[j] = src[i];
	i++;
	j++;
	}
dest[j] = '\0';
return (dest);

}


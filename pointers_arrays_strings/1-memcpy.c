#include "main.h"
/**
*_memcpy - prototype string character
*@dest: pointeurs variable
*@src: variable
*@n:variable
*Return: my count
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
return (dest);
}

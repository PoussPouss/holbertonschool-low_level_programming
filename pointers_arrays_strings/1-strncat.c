#include "main.h"
/**
*_strncat - prototype string character
*@dest: pointeurs variable
*@src: variable
*@n: variable
*Return: initial dest
*/
char *_strncat(char *dest, char *src, int n)

{

int j = 0;
int i = 0;

	while (dest[j] != '\0')
	{
	j++;
	}
while (src[i] != '\0' && i < n)
		{
dest[j] = src[i];
i++;
j++;
		}
dest[j] = '\0';
return (dest);
}

#include "main.h"
/**
*_memset - its my main.c with prototype into
*@b: variable
*@s: variable
*@n: variable
*Return: value on variable s
*/
char *_memset(char *s, char b, unsigned int n)

{
unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

return (s);
}

#include "main.h"
#include <stdio.h>
/**
*_strchr - prototype string character
*@s: pointeurs variable
*@c: variable
*Return: my count
*/

char *_strchr(char *s, char c)

{

while (*s)
{

	if (*s == c)
	return (s);
s++;
}

if (c == '\0')

return (s);


return (NULL);

}

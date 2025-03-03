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
int i = 0;

while (s[i] != '\0')
{

if (s[i] == c)
return (s + i);
i++;
}

return (NULL);

}

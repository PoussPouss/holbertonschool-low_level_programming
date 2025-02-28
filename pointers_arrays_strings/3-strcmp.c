#include "main.h"

/**
*_strcmp - prototype string character
*@s1: first part en chain
*@s2: second part of chain
*Return: initial dest
*/


int _strcmp(char *s1, char *s2)

{

int a = 0;
int b = 0;

while (s1[a] != '\0' && s2[b] != '\0')
{

if (s1[a] == s2[b])
{
a++;
b++;
}

else
{
return (s1[a] - s2[b]);
}
}

return (s1[a] - s2[b]);

}




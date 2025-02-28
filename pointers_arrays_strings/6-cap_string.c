#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*cap_string - prototype string character
*@str: variable
*/
char *cap_string(char *str)

{
int i;
char separator[] = " \t\n,;.!?\"(){}";

if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = str[0] - 32;
}
for (i = 0; str[i] != '\0'; i++)
{
	if (strchr(separator, str[i]))
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}

}
return (str);

}

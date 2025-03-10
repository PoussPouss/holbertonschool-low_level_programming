#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*str_concat - Creates an array of chars and initializes it with a char
*@s1: The size of the array
*@s2: Size of second array
* Return: Pointer to the array, or NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
char *concat;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

concat = malloc(strlen(s1) + strlen(s2) + 1);
strcpy(concat, s1);
strcat(concat, s2);

return (concat);

}

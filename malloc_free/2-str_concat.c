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
int i;
int j;
int len1 = 0;
int len2 = 0;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

concat [i + j] = '\0';

return (concat);
}

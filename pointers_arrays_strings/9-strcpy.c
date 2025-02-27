#include "main.h"
#include <stdio.h>
/**
*_strcpy - prototype string character
*@dest: pointeurs variable
*@src: variable
*/
char *_strcpy(char *dest, char *src)

{

int i;
char *initial_dest = dest;



for (i = 0; src[i] != '\0'; i++)
{
*dest = src[i];
dest++;
}
*dest = '\0';
return (initial_dest);

}

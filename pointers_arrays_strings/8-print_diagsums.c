#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prototype with string characters
*@a: pointeur
*@size: size of string
*/

void print_diagsums(int *a, int size)
{
int i;
int j = 0;
int k = 0;

for (i = 0; i < size; i++)
{
j += a[i * size + i];
k += a[i * size + (size - 1 - i)];
}
printf ("%d, %d\n" ,j ,k);

}
#include "main.h"
#include <stdio.h>
/**
 *print_array - prototype string character
 *@a: pointeurs variable
 *@b: variable
 */
void print_array(int *a, int n)

{
int i;

for (i = 0; i < n; i++)
{
if (i != n - 1)
printf ("%d, ", a[i]);

 else
printf("%d", a[i]);
}
 printf("\n");


}

#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
int i;

	if (n <= 98)
	{

		for (i = n; i <= 98; i++)

		{

		printf("%d, ", n);

		}

	}

	else

	{

		for (i = n; i <= 98; i--)

		{

		printf("%d, ", n);

		}

	}

printf("98\n");

}


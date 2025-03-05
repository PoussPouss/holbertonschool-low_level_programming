#include <stdio.h>
/**
*main - fonction argc argv
*@argc:variable
*@argv: array whith my file name
*Return: 0 if succes
*/

int main(int argc, char *argv[])
{
int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

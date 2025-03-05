#include <stdio.h>
/**
*main - fonction argc argv
*@argc:variable
*@argv: array whith my file name
*Return: 0 if succes
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}

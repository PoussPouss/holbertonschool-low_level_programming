#include <stdlib.h>
#include <stdio.h>
/**
* main - Multiplies two numbers
*
* This program takes two arguments, converts them to integers,
* multiplies them, and prints the result followed by a new line.
* If the program does not receive exactly two arguments,
* it prints "Error" and returns 1.
*
* @argc: Argument count (number of command-line arguments)
* @argv: Argument vector (array of strings containing the arguments)
*
* Return: 0 on success, 1 on error
*/


int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);

	return (0);
}

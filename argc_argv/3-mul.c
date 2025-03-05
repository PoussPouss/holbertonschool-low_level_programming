#include <stdlib.h>
#include <stdio.h>

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

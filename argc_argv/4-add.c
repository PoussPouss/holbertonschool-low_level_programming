#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
int num;
int i;
int j;
int result= 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
if (argc > 1)
{

for (i = 1; i < argc; i++)
{
    for (j = 0; argv[i][j] != '\0'; j++)
    {
        if (!isdigit(argv[i][j]))
        printf("Error\n");
        
    }
    return (1);
num = atoi(argv[i]);
result += num;

}
printf("%d\n", result);

}
return (0);
}
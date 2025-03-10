
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof(int) * 10);
    ptr[0] = 42;
    return (0);
}

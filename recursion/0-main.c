#include "main.h"

int _sqrt_recursion(int n, int i)
{
    if (n < 0)
    return (-1);

    if (i * i == n)
    return (i);

    if (i * i > n)
    return (-1);

return (_sqrt_recursion(n, i + 1));

}

int _sqrt_recursion(int n)
{
    return _sqrt_recursion(n, 1);
}

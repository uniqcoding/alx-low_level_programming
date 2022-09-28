#include "main.h"

/**
 * _sqrt_recursion - return natural square root of number
 * @n: number to use
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (n);
return (_sqrt(0, n));
}

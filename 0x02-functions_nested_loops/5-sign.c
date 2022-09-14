#include "main.h"
/**
* print_sign - function to check sign of a number
* @n: int used for argument of function
* Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

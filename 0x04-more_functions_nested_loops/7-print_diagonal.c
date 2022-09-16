#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints diagonal line
* @n: parameter
* Return: nothing
*/

void print_diagonal(int n)
{
int space, len;

if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
{
putchar(' ');
}

putchar('\\');

if (len == (n - 1))
{
continue;
}
putchar('\n');
}
}
putchar('\n');
}

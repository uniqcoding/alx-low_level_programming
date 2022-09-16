#include <stdio.h>
#include "main.h"

/**
* print_triangle - prints triangle
* @size: parameter
* Return: nothing
*/

void print_triangle(int size)
{
int tr1, tr2;
if (size > 0)
{
for (tr1 = 1; tr1 <= size; tr1++)
}
for ((tr2 = size - tr1); tr2 > 0; tr2--)
{
putchar(' ');
}
for (tr2 = 0; tr2 < tr1; tr2++)
{
putchar('#');
}

if (tr1 == size)
{
continue;
}

putchar('\n');
}
}
putchar('\n');
}

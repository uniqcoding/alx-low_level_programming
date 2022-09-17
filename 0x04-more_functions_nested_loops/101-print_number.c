#include "main.h"

/**
* print_number - prints integer
* @n: random number
* Return: void
*/

void print_number(int n)
{
char cd, ce;
int r;
int cf = 0;

if (n < 0)
{
_putchar ('-');
cd = (char)('0' - (n % 10));
n = n / -10;
}
else
{
cd = (char)((n % 10) + '0');
n = n / 10;
}

r = 0;
while (n > 0)
{
r = r * 10 + (n % 10);
n = n / 10;
cf++;
}

while (r > 0)
{
ce = (char) ((r % 10) + '0');
_putchar(ce);
r = r / 10;
cf--;
}
while (cf != 0)
{
_putchar('0');
ct--;
}
_putchar(cd);
}

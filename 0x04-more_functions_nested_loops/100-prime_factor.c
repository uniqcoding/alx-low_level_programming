#include <stdio.h>

/**
* main - print largest prime factor
* Return: 0
*/

int main(void)
{
long number = 612852475143;
int icc;

while (icc++ < number / 2)
{
if (number % icc == 0)
{
number /= 2;
continue;
}

for (icc = 3; icc < number / 2; icc += 2)
{
if (number % icc == 0)
number /= icc;
}
}
printf("%ld\n", number);
return (0);
}

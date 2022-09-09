#include<stdio.h>
/**
* main - prints all digits of base 10 from zero
*
* Description: this program prints all digits of base 10
* starting from zero
* Return: 0
*/
int main(void);
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}

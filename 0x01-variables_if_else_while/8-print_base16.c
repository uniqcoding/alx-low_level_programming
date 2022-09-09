#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: using the main function
* this program prints all numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

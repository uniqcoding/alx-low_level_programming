#include <stdio.h>
/**
* main - print the lowercase alphabet in reverse
*
* Description: using the main function this program
* prints the lowercase in reverse followed by a new line
* Return: 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return(0);
}

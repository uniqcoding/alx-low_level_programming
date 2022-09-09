#include <stdio.h>
/**
* main - prints alphabet in lowercase followed by a new line
* 
* Description: using main function
* this program prints the alphabet in uppercase
* except e and q
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
* main - print the alphabet in lowercase followed by a new line
*
* Description: using main function 
* this program prints the alphabet in lower case
* Return: 0
*/
int main(void)
{
  char ch;
  for (ch = 'a' ; ch <= 'z' ; ch++)
    {
      putchar(ch);
    }
  putchar('\n');
  return (0);
}

#include <stdio.h>
/**
* main - a program that prints size of types
* Description - using main function the program prints
* size of various types on the computer it is compiled on
* Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of char: %ld byte(s)\n", sizeof(c));
printf("Size of char: %ld byte(s)\n", sizeof(i));
printf("Size of char: %ld byte(s)\n", sizeof(li));
printf("Size of char: %ld byte(s)\n", sizeof(lli));
printf("Size of char: %ld byte(s)\n", sizeof(f));
return (0);
}

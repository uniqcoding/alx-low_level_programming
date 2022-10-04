#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints two numbers
 * @argc: input argument
 * @argv: stores string as char
 * Return: 0
 */

int main(int argc, char *argv[])

{
int num1, num2, prod;

if (argc != 3)
printf("Error\n");
else
{
num1 = atoi(argc[1]);
num2 = atoi(argv[2]);
prod = num1 * num2;
printf("%d\n", prod);
}
return (0);
}

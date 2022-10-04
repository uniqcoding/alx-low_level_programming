#include <stdio.h>

/**
 * main - Program to print number of arguments passed into it
 * @argc: stores number of arguments
 * @argv: stores arguments in string format
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}

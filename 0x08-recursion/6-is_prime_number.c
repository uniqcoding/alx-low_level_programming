#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime
 * @n: number to check
 * Return: 1 if n is prime, 0 if otherwise
 */

int is_prime_number(int n)
{
int start = n / 2;

if (n <= 1)
	return (0);
return (is_prime(n, start));
}

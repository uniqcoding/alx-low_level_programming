#include "main.h"
/**
 * is_palindrome - return 1 if s is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
int flag = 1;
check(s, 0, _strlen_recursion(s) - 1, &flag);
}

/**
 * check - checks if string is palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if string is palindrome
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
if (start <= end)
{
if (s[start] == s[end])
	*flag *= 1;
else
	*flag *= 0;
check(s, start + 1, end - 1, flag);
}
}

/**
 * _strlen_recursion - calculates length of string
 * @s: string to be used
 * Return: length of the string
 */

int_strlen_recursion(char *s)
{
int sum = 0;
if (*s != '\0')
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
}

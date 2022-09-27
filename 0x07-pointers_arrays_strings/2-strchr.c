#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string to check
 * @c: character to check for
 * Return: pointer to address in s with c or null
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}

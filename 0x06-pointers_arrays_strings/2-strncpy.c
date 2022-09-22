#include "main.h"

/**
 * _strncpy - function copies a string including terminating
 * null byte using at most an inputted number of bytes
 * If length of source string is less than maximum byte
 * number, remainder of destination string is filled
 * with null bytes
 * @dest: string copy buffer store
 * @src: source string
 * @n: maximum number of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}

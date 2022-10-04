#include "main.h"

/**
 * _strdup - returns pointer to newly allocated apace in
 * mem containing copy of string given as parameter
 * @str: parameter
 * Return: NULL incase of error, pointer to space otherwise
 */

char *_strdup(char *str)
{
char *cpy;
int index, len;

if (str == NULL)
	return (NULL);

for (index = 0; str[index]; index++)
	len++;
cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}
cpy[len] = '\0';

return (cpy);
}

#include "main.h"

/**
 * create_array - function to create an array of
 * characters and initialize it with a specific character
 * @size: size of array
 * @c: character to initialize
 * Return: NULL if size is 0 or fails, pointer to
 * array otherwise
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
	return (NULL);
array = malloc(sizeof(char) * size);

if (array == NULL)
	return (NULL);

for (index = 0; index < size; index++)
	array[index] = c;

return (array);
}

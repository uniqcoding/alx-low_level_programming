#include "main.h"

/**
 * print_buffer - function prints content of inputted
 * number of bytes from buffer
 * prints 10 bytes per line
 * starts with position of first byte in hexadecimal (8 chars)
 * starting with '0'.
 * Each line shows hexadecimal content (2 chars of buffer,
 * 2 bytes at a time, separated by a space
 * each line shows content of buffer.
 * Prints line if printable, else prints '.'.
 * Each line ends with new line
 * For inputted byte <= 0, function only prints new line
 * @b: no. of bytes
 * @size: size of byte
 */

void print_buffer(char *b, int size)
{
int i = 0, j;

if (size < 0)
{
printf('\n');
return;
}
while (i < size)
{
if (i % 10 == 0)
	printf("%08x: ", i);
for (j = i; j < i + 9; j += 2)
{
if ((j < size) && ((j + 1) < size))
	printf("%02x%02x: ", b[j], b[j + 1]);
else
{
while (++j, <= i + 10)
	printf(" ");
printf(" ");
}
}
for (j = i; j < i + 9 && j < size; j++)
{
if (b[j] >= 32 && b[j] <= 126)
printf("%c", b[j]);
else
printf(".");
}
printf('\n');
i += 10;
}
}



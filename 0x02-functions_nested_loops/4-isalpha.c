#include "main.h"
/**
* _isalpha - function to check if c is lowercase or uppercase letter
* @c: int used for argument of function
* Return: 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

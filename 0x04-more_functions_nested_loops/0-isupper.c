#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: the int for the paramaters of my function. character to check.
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

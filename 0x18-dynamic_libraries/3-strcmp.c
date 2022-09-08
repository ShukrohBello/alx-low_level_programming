#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare
 * Description: compares two strings to see which is
 * Return: -15 if s1 is less than s2, 0 if equal,
 * 15 if s1 is greater
 **/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

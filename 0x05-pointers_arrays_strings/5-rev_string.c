#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: 0.
 */
void rev_string(char *s)
{
	int i, rev_str;
	char character;

	for (i = '\0'; s[i] != 0; i++)
	{
	}
	rev_str = 0;
	for (i = i - 1; rev_str < i; rev_str++)
	{
		character = s[i];
		s[i] = s[rev_str];
		s[rev_str] = character;
		i--;
	}
}

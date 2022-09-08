#include "main.h"

/**
 * *_strcat - concatenates two strings @src to @dest
 * @src: the source string to add to @dest
 * @dest: the destiation string to be concatenated with
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_l = 0;

	while (dest[i++])
		dest_l++;
	for (i = 0; src[i]; i++)
		dest[dest_l++] = src[i];
	return (dest);
}

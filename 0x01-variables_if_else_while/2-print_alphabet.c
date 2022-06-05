#include <stdio.h>

/**
 * main - print alphabets
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z' ; alphabets++)
		putchar(alphabets);
	putchar("\n");
	return (0);
}

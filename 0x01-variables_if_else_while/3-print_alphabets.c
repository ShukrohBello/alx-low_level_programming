#include <stdio.h>
/**
 * main - entry point function
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

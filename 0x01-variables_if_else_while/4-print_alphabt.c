#include <iostream>

/**
* main - Entry function
* Description: using the main function
* program that prints the alphabet in lowercase except q and e,
* followed by a new line
* Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}

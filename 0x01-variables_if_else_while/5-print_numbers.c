#include <stdio.h>

/**
* main - print the string in the put function
* Description: using the main function
* this program prints all single digit numbers of base 10 starting from 0,
* followed by a new line.
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}

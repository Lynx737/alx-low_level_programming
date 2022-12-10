#include <stdio.h>

/**
 * main - print single digit numbers
 * Descripton: print single digit numbers
 * Return:0 Code Successful
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

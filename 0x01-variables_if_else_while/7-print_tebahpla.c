#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 * Description: print the letters of the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int d = 122;

	while (d > 96)
	{
		putchar(d);
		d--;
	}
	putchar(10);

	return (0);
}

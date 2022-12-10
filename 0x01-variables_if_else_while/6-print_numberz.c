#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Desciption: print single digit numbers
 *
 * Return:0 code successfull
 */

int main(void)
{
	int d;
	d = 48;
	while (d < 58)
	{
		putchar(d);
		d++;
	}

	putchar(10);

	return (0);
}

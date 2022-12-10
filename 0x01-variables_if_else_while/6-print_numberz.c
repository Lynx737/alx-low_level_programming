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
	d = 0;
	while (d < 10)
	{
		putchar(d);
		d++;
	}

	putchar(10);

	return (0);
}

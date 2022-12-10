#include <stdio.h>

/**
 * main - pprints all the numbers of base 16 in lowercase,
 *followed by a new line.
 * Description: prints all the numbers of base 16 in lowercase, 
 * followed by a new line.
 *
 * Return:0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d < 48)
	{
		if (d < 10)
			putchar(d + '0');
		else if (d > 41)
			putchar(d - 10 + 'A');
		d++;
	}
	putchar(10);

	return (0);
}

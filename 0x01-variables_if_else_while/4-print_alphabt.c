#include <stdio.h>
/**
 * main - prints lowercase alphabets from a to z
 * Return:0 code successful
 * description: print the letters of the alphabet
 */

int main(void)
{
	int a = 97;

	/* Alphabets excluding q and e */
	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}

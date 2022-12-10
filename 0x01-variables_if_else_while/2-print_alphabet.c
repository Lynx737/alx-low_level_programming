#include <stdio.h>
/**
 * main - prints lowercase alphabets from a to z
 * Return:0 code successful
 * description: print the letters of the alphabets
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}

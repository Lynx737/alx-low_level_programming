#include <stdio.h>
/**
 * main - prints lowercase alphabets from a to z
 * Return:0 code successful
 * description: print the letters of the alphabets
 */

int main(void)
{
	int i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

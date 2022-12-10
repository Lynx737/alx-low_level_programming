#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Description: prints the alphabet in reverse
 * Return: 0 code Successful 
 */

int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);

	return (0);
}

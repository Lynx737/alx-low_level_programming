#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * return: void code successful
 */

void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		int b;

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		times++;

	}

}

#include "main.h"
/**
 * print_sign - prints 1 and + if input is greater than zero,
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 * @n: input to be checked
 * return: 0 or 1 code successful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else  if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

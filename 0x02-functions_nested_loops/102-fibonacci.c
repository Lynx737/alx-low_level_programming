#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 Fibonacci numbers.
 * Return: 0 code Successfull
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}

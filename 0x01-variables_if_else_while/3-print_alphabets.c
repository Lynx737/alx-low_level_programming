#include <stdio.h>
/**
* main - prints Upperncase ialphabets from a to z
* Return:0 code successful
* description: print the letters of the alphabet
*/

int main(void)
{
	int i, j;

	i = 97;

	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}

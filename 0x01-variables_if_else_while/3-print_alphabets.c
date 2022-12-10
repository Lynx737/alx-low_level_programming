#include <stdio.h>
/**
* main - prints Upperncase ialphabets from a to z
* Return:0 code successful
* description: print the letters of the alphabet
*/

int main(void)
{
	int ch;
	/* upper case letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar("\n");
	return (0);
}

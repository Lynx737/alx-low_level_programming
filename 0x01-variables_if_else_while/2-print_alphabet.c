#include <stdio.h>
/**
 * main - prints lowercase alphabets from a to z
 * Return:0 code successful
 * description: print the letters of the alphabet
 */

int main(void)
{
	int ch;
	/* lower case letters */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar("\n");
	return (0);
}

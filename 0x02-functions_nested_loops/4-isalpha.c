#include "main.h"
/**
 * _isalpha- prints 1 if input is alphabet and 0 otherwise
 * @c: the input
 * Return: > 1 if alpha and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

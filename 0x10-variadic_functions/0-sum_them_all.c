#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return:0 if n == 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int index = 0; 
	unsigned int sum = 0;

	va_start(num, n);

	for (index = 0; index < n; index++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}

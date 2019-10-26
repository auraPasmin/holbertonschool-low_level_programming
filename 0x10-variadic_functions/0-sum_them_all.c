# include  "variadic_functions.h"
# include  <stdarg.h>

/**
 * sum_them_all - sum the all parameters
 * @n: number of parameters
 * @ ...: variable de params
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}
	va_end(num);
	return (sum);
}

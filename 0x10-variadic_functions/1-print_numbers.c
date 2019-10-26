# include  "variadic_functions.h"
# include  <stdarg.h>

/**
 * print_numbers - sum the all parameters
 * @n: number is a usigned int
 * @separator:take a pointer
 * @ ...: variable
 * Return: the sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
				if (i < (n - 1) && separator != NULL)
				{
				printf("%s", separator);
				}

				}
				va_end(numbers);
				printf("\n");

				}

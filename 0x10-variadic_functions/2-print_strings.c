# include  "variadic_functions.h"
# include  <stdarg.h>

/**
 * print_strings - sum the all parameters
 * @n: number is a usigned int
 * @separator:take a pointer
 * @ ...: variable
 * Return: str
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *str2;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str2 = va_arg(str, char*);

		if (str2 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str2);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(str);
	printf("\n");

}

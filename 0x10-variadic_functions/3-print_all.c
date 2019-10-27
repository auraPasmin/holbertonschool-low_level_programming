# include  "variadic_functions.h"
# include  <stdarg.h>
/**
 * print_char - sum the all parameters
 * @args: char is a usigned int
 * Return: is a void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_integer - sum the all parameters
 * @args: int  is a usigned int
 * Return: is a void
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - sum the all parameters
 * @args: float is a usigned int
 * Return: is a void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - sum the all parameters
 * @args: string is a used char
 * Return: is a void
 */
void print_string(va_list args)
{
char *str;
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}
/**
 * print_all - sum the all parameters
 * @format: contans
 * @ ...: variable
 * Return: str
**/
void print_all(const char * const format, ...)
{
	va_list args;
	arg_t arg[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;
	char *separ = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		int j = 0;

		while (j < 4)
		{
			if (format[i] == arg[j].format[0])
			{
				printf("%s", separ);
				arg[j].f(args);
				separ = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

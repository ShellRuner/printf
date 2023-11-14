#include "main.h"

/**
 * _printf - A function that print data to standard output
 * @format: the first argument
 *
 * Return: the number of character print or -1 (fail)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = count + test_format(format, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

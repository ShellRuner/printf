#include "main.h"

/**
 * test_format - A function that test the formatage
 * @str: a pointer to a string
 * @args: A paramter of type va_list
 *
 * Return: the number of charater print
 */
int test_format(const char *str, va_list args)
{
	int count = 0;

	if (*str == 'c')
	{
		count = count + formatC_handle(args);
	}
	if (*str == '%')
	{
		count = count + write(1, str, 1);
	}
	if (*str == 's')
	{
		count = count + formatS_handle(args);
	}
	if (*str == 'd' || *str == 'i')
	{
		count = count + formatD_handle(args);
	}
	return (count);
}

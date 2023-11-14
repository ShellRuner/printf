#include "main.h"

/**
 * formatC_handle - A function that handle the %c formatage
 * @args: a parameter of type va_list
 *
 * Return: the  number of character print
 */
int formatC_handle(va_list args)
{
	int count = 0;
	int character;

	character = va_arg(args, int);
	count = count + write(1, &character, 1);
	return (count);
}

/**
 * formatS_handle - A function that handle the %s format
 * @args: a parameter of type va_list
 *
 * Return: the number of character print
 */
int formatS_handle(va_list args)
{
	int count = 0;
	char *string;

	string = va_arg(args, char *);
	while (*string != '\0')
	{
		count = count + write(1, string, 1);
		string++;
	}
	return (count);
}

/**
 * print_int - A function that allowed to print intger
 * @c: an integer to print
 *
 * Return: the numbers of character print
 */
int print_int(int c)
{
	int count = 0, r = c % 10 + '0';

	if (c < 0)
	{
		write(1, &c, 1);
		count++;
		c = -c;
	}
	if (c / 10)
		count = count + print_int(c / 10);
	write(1, &r, 1);
	count++;
	return (count);
}

/**
 * formatD_handle - A function that handle the %d and i format
 * @args: a parameter of type va_list
 *
 * Return: the number of character print
 */
int formatD_handle(va_list args)
{
	int count = 0, integer;

	integer = va_arg(args, int);
	count = count + print_int(integer);
	return (count);
}

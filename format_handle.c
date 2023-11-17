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
	int count = 0, v = '-';

	if (c < 0)
	{
		write(1, &v, 1);
		count++;
		c = -c;
	}
	if (c / 10)
		count = count + print_int(c / 10);
	_putchar(c % 10 + '0');
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

/**
 * print_binary - A function that allow to print number in binary
 * @c: the number to print in binary
 *
 * Return: the number of character print
 */
int print_binary(int c)
{
	int count = 0, i = 0, j = 0, bin1 = '0';
	unsigned int num = c, array[100];

	if (c == 0)
	{
		write(1, &bin1, 1);
		return (1);
	}
	while (num > 0)
	{
		array[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
		count++;
	}
	return (count);
}
/**
 * formatB_handle - A function that handle the %b
 * @args: a parameter of type va_list
 *
 * Return: the number of character print
 */
int formatB_handle(va_list args)
{
	int count = 0;
	unsigned int binary;

	binary = va_arg(args, unsigned int);
	count = count + print_binary(binary);
	return (count);
}

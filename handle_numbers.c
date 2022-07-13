#include "main.h"

/**
 * handle_numbers - print numbers with specified formats
 * @spec: specifier
 * @list: list of values
 * Return: number of characters displayed
 */
int handle_numbers(char spec, va_list list)
{
	int count = 0, add_count = 0;

	switch (spec)
	{
	case 'd':
	case 'i':
		add_count = print_int(va_arg(list, int));
		break;
	case 'u':
		add_count = print_unsigned(va_arg(list, unsigned int));
		break;
	case 'o':
		add_count = print_oct(va_arg(list, unsigned int));
		break;
	case 'x':
		add_count = print_hex(va_arg(list, unsigned int));
		break;
	case 'X':
		add_count = print_HEX(va_arg(list, unsigned int));
		break;
	}

	count += add_count;
	return (count);
}

#include "main.h"

/**
 * handle_format - choose how to display base on format
 * @spec: character to test
 * @list: arg list
 * Return: length characters printed
 */
int handle_format(char spec, va_list list)
{
	int count = 0;
	int add_count = 0;

	switch (spec)
	{
	case 'c':
		_putchar((char)va_arg(list, int));
		add_count = 1;
		break;
	case 's':
		add_count = print_string(va_arg(list, char *));
		break;
	case 'i':
	case 'd':
		add_count = print_int(va_arg(list, int));
		break;
	}

	count += add_count;
	return (count);
}

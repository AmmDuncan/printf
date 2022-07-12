#include "main.h"

/**
 * print_int - print integer to stdout
 * @num: integer to print
 * Return: number of characters printed
 */
int print_int(int num)
{
	int len = 1;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		return (count + print_int(num * -1));
	}

	while (num / len > 10)
	{
		len *= 10;
	}

	while (len >= 1)
	{
		int first = num / len;

		putnum(first);
		num = num % len;
		len = len / 10;
		count++;
	}

	return (count);
}

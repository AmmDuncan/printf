#include "main.h"

/**
 * print_unsigned - print unsigned integer
 * @num: number to print
 * Return: count
 */
int print_unsigned(unsigned int num)
{
	int count = 0;
	unsigned int len = 1;

	while (num / len >= 10)
	{
		len *= 10;
	}

	while (len >= 1)
	{
		int first = num / len;

		putnum(first);
		num %= len;
		len /= 10;
		count++;
	}

	return (count);
}

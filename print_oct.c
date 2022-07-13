#include "main.h"

/**
 * print_oct - convert unsigned int to base 8
 * @num: unsigned integer to convert
 * Return: number of numbers printed
 */
int print_oct(unsigned int num)
{
	int *rems = malloc(sizeof(int) * 1024);
	int *start = rems;
	int count = 0;
	unsigned int base = 8;

	if (num == 0)
	{
		putnum(0);
		return (1);
	}

	while (num >= base)
	{
		*rems = num % base;
		rems++;
		num /= base;
	}
	*rems = num % base;

	while (rems != start)
	{
		putnum(*rems);
		count++;
		rems--;
	}
	putnum(*start);
	count++;

	free(rems);
	return (count);
}

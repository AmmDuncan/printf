#include "main.h"

/**
 * print_HEX - print number as hexadecimal
 * @num: number to convert and print
 * Return: number of characters printer
 */
int print_HEX(unsigned int num)
{
	int *rems = malloc(sizeof(int) * 1024);
	int *start = rems;
	int last;
	int count = 0;
	unsigned int base = 16;

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
		int val = *rems;

		if (val < 10)
		{
			putnum(*rems);
		}
		else
		{
			print_ALPHA(val);
		}
		rems--;
		count++;
	}

	last = *start;
	if (last < 10)
	{
		putnum(last);
	}
	else
	{
		print_ALPHA(last);
	}
	count++;

	free(rems);
	return (count);
}

/**
 * print_hex - print number as hexadecimal
 * @num: number to convert and print
 * Return: number of characters printer
 */
int print_hex(unsigned int num)
{
	int *rems = malloc(sizeof(int) * 1024);
	int *start = rems;
	int count = 0;
	int last;
	unsigned int base = 16;

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
		int val = *rems;

		if (val < 10)
		{
			putnum(*rems);
		}
		else
		{
			print_alpha(val);
		}
		count++;
		rems--;
	}

	last = *start;
	if (last < 10)
	{
		putnum(last);
	}
	else
	{
		print_alpha(last);
	}

	count++;

	free(rems);
	return (count);
}

/**
 * print_alpha - print alpha version of
 * @num: remainder to check
 */
void print_alpha(int num)
{
	char *collection = malloc(sizeof(int) * 17);

	collection[10] = 'a';
	collection[11] = 'b';
	collection[12] = 'c';
	collection[13] = 'd';
	collection[14] = 'e';
	collection[15] = 'f';

	_putchar(collection[num]);
}

/**
 * print_alpha - print alpha version of
 * @num: remainder to check
 */
void print_ALPHA(int num)
{
	char *collection = malloc(sizeof(int) * 17);

	collection[10] = 'A';
	collection[11] = 'B';
	collection[12] = 'C';
	collection[13] = 'D';
	collection[14] = 'E';
	collection[15] = 'F';

	_putchar(collection[num]);
}

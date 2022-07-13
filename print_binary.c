#include "main.h"

/**
 * print_binary - convert unsigned int to binary
 * @num: unsigned integer to convert
 * Return: number of numbers printed
 */
int print_binary(unsigned int num)
{
	int *rems = malloc(sizeof(int) * 1024);
	int *start = rems;
	int count = 0;

	if (num == 0)
	{
		putnum(0);
		return (1);
	}

	while (num >= 2)
	{
		*rems = num % 2;
		rems++;
		num /= 2;
	}
	*rems = num % 2;

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

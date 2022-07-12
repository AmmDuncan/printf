#include "main.h"

/**
 * _putchar - custom putchar function
 * @c: char to print to stdout
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * putnum - function to print number to stdout
 * @num: number to print to stdout
 */
void putnum(int num)
{
	_putchar(num + '0');
}

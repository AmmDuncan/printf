#include "main.h"

/**
 * print_string - function print a string
 * @str: string to print
 * Return: length of string printed
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
	{
		str = "null";
	}

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

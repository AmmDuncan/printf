#include "main.h"
#include <limits.h>

/**
 * main - main function
 * Return: int
 */
int main(void)
{
	int len, len2;
	long int l = UINT_MAX + 1024;
	long int res = UINT_MAX * 2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character: [%c]\n", 'A');
	printf("Character: [%c]\n", 'A');
	_printf("String: [%s]\n", "I am a string");
	printf("String: [%s]\n", "I am a string");
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Number: %d\n", -329750);
	len2 = printf("Number: %d\n", -329750);
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%!\n");
	_printf("%d\n", 1024);
	_printf("%d\n", -1024);
	// _printf("%d", INT_MIN);
	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%i\n", -1024);
	_printf("%b\n", 1024);
	_printf("%b\n", -1024);
	_printf("%b\n", 0);
	_printf("%b\n", UINT_MAX);
	_printf("%b\n", l);
	_printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	len = _printf("%b - %b = %b\n", 2048, 1024, 1024);
	len2 = printf("100000000000 - 10000000000 = 10000000000\n");
	_printf("%u\n", -1024);
	_printf("%u\n", l);
	_printf("%o\n", 1024);
	_printf("%o\n", -1024);
	_printf("There is %o bytes in %o KB\n", 1024, 1);
	_printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	_printf("%x\n", -1024);
	_printf("%X\n", -1024);
	_printf("%X\n", 1024);
	return (0);
}

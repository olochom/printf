#include "main.h"

/**
 * print_int - Converts and prints an integer.
 * @args: The va_list that contains the integer to be printed.
 *
 * Return: Number of digits printed.
 */
int print_int(va_list args)
{
	int b = va_arg(args, int);
	char buffer[12];
	char *str = buffer;
	int w = 0;

	convert(b, buffer);

	while (*str)
	{
		_putchar(*str++);
		w++;
	}

	return (w);
}

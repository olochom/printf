#include "main.h"
/**
 * print_string - prints a string
 * @args: argument list containing the string for printing
 *
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	unsigned int w = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		w++;
	}

	return (w);
}

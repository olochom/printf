#include "main.h"

/**
 * print_string - prints a string
 * @args: argument list containing the string for printing
 *        if the string is NULL, print "(null)"
 *
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int count = 0;

	if (!string)
		string = "(null)";
	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}

	return (count);
}

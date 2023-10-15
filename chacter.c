#include "main.h"

/**
 * print_char - prints a character
 * @args: argument list containing the characters for printing
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char x = va_arg(args, int);

	putchar(x);
	return (1);
}

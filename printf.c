#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int w = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				w += print_char(args);
			else if (*format == 's')
				w += print_string(args);
			else if (*format == '%')
				w += print_percent();
			else
			{
				putchar('%');
				putchar(*format);
				w += 2;
			}
		}
		else
		{
			putchar(*format);
			w++;
		}
		format++;
	}
	va_end(args);
	return (w);
}

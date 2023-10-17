#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format string.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int w = 0;
	int x;

	va_start(args, format);

	for (x = 0; format && format[x] != '\0'; x++)
	{
		if (format[x] == '%' && format[x + 1])
		{
			x++;
			switch (format[x])
			{
			case 'c':
				w += print_char(args);
				break;
			case 's':
				w += print_string(args);
				break;
			case '%':
				w += print_percent();
				break;
			case 'd':
			case 'i':
				w += print_int(args);
				break;
			default:
				x--;
				break;
			}
		}
		else
		{
			_putchar(format[x]);
			w++;
		}
	}

	va_end(args);
	return (w);
}

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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c': /* Handle characters */
				w += print_char(args);
				break;
			case 's': /* Handle strings */
				w += print_string(args);
				break;
			case '%': /* Handle literal percent */
				w += print_percent();
				break;
			case 'd':
			case 'i':
				w += print_int(args);
				break;
			default: /* Handle unspecified specifiers */
				_putchar('%');
				_putchar(*format);
				w += 2;
				break;
			}
		}
		else
		{
			_putchar(*format);
			w++;
		}
		format++;
	}
	va_end(args);
	return (w);
}

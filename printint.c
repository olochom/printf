#include "main.h"

int _printf(const char *format, ...)
{
	int Austine, i;
	va_list args;

	va_start(args, format);

	Austine = 0;
	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				char mwangi = va_arg(args, int);

				putchar(mwangi);
				Austine++;
			}
			else if (format[i] == 's')
			{
				char *gwada = va_arg(args, char *);

				while (*gwada)
				{
					putchar(*gwada);
					gwada++;
					Austine++;
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				Austine++;
			}
		}
		else
		{
			putchar(format[i]);
			Austine++;
		}
		i++;
	}

	va_end(args);
	return (Austine);
}

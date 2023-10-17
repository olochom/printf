#include "main.h"

/**
 * convert - Converts an integer to a string.
 * @b: The integer.
 * @str: The string buffer to write to.
 *
 * Return: The buffer with the string representation of the integer.
 */

char *convert(int b, char *str)
{
	int i = 0, s, e, t;

	if (b == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (b < 0)
	{
		str[i++] = '-';
		b = -b;
	}

	t = i;

	while (b)
	{
		str[i++] = (b % 10) + '0';
		b /= 10;
	}
	str[i] = '\0';

	for (s = t, e = i - 1; s < e; s++, e--)
	{
		char m = str[s];

		str[s] = str[e];
		str[e] = m;
	}

	return (str);
}

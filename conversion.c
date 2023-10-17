#include "main.h"

/**
 * convert - Converts an integer to a string.
 * @b: The integer to be converted.
 * @str: The string buffer to which the integer is converted.
 *
 * Return: The buffer with the string representation of the integer.
 */

char *convert(int b, char *str)
{
	int i = 0, k, j;
	int neg = 0;

	if (b == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (b < 0)
	{
		str[i++] = '-';
		neg = 1;
		b = -b;
	}

	while (b)
	{
		str[i++] = (b % 10) + '0';
		b /= 10;
	}

	str[i] = '\0';

	k = neg;
	j = i - 1;

	while (k < j)
	{
		char m = str[k];

		str[k] = str[j];
		str[j] = m;
		k++;
		j--;
	}

	return (str);
}

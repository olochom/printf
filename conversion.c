#include "main.h"

/**
 * convert - Converts an integer to a string.
 * @b: The integer to be converted.
 * @buffer: The buffer to which the integer is converted.
 *
 * Return: The buffer with the string representation of the integer.
 */

char *convert(int b, char *buffer)
{
	int i = 0, k, j, neg = 0;

	if (b == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return (buffer);
	}

	if (b < 0)
	{
		buffer[i++] = '-';
		neg = 1;
		b = -b;
	}

	while (b)
	{
		buffer[i++] = (b % 10) + '0';
		b /= 10;
	}

	buffer[i] = '\0';

	for (k = neg, j = i - 1; k < j; k++, j--)
	{
		char m = buffer[k];

		buffer[k] = buffer[j];
		buffer[j] = m;
	}

	return (buffer);
}

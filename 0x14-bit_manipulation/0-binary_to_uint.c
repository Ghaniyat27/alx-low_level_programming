#include "main.h"

/**
 * binary_to_uint - This function creates an unsigned int from a binary num.
 * @b: pointer to a string with a binary num in it
 *
 * Return: unsigned int with decimal value of binary numb, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (g = 0; b[g] != '\0'; g++)
	{
		if (b[g] != '0' && b[g] != '1')
			return (0);
	}
	for (g = 0; b[g] != '\0'; g++)
	{
		num <<= 1;
		if (b[g] == '1')
			num += 1;
	}
	return (num);
}

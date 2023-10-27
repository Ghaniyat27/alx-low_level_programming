#include "main.h"

/**
 * flip_bits - figures out how many bits need to be changed
 * to get from one number to another
 * @n: first number
 * @s: second number
 *
 * Return: number of bit's to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int s)
{
	int a, countbit = 0;
	unsigned long int existing;
	unsigned long int exclusive = n ^ s;

	for (a = 63; a >= 0; a--)
	{
		existing = exclusive >> a;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}

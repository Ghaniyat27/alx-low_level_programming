#include "main.h"

/**
 * get_endianness - program check's the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int g;
	char *b;

	g = 1;
	b = (char *)&g;
	return (*b);
}

#include "hash_tables.h"

/**
 * hash_djb2 - Function's to Compute Hash of 'str' Using djb2
 * @str: String to The Hash
 *
 * Return: Value of 64 bit's Hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

#include "hash_tables.h"

/**
 * key_index - Get's the Index for Key Given
 * @key: Key (string) to Hash
 * @size: Size of the Hash Table
 *
 * Return: Index of the 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


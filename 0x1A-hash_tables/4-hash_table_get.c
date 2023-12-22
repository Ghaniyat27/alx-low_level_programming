#include "hash_tables.h"
/**
 * hash_table_get - Function's to Retrieve's Value Associated With Key
 * @ht: Pointer to The Hash Table's
 * @key: The Key to Retrive Value's
 *
 * Return: Value or NULL If The Key Does Not Exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: pointer to a key
 * @size: size of hash table
 *
 * Return: index at which the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	if (size == 0)
		return(0);
	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	hash = hash % size;
	return (hash);
}

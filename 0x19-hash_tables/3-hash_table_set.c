#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to a struct of type hash_table_t
 * @key: key to insert
 * @value: associated value to insert
 *
 * Return: 1 if it succeede, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *bucket = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int hash = 0;

	if (!key)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[hash];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	bucket = malloc(sizeof(hash_node_t));
	if (!bucket)
		return (0);
	bucket->key = strdup((char *)key);
	bucket->value = strdup(value);
	if (bucket->key == NULL || bucket->value == NULL)
	{
		free(bucket);
		return (0);
	}
	bucket->next = ht->array[hash];
	ht->array[hash] = bucket;
	return (1);
}

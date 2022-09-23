#include "hash_tables.h"

/**
 * key_index - return the index at which a key/value pair
 *	should be stored in array of a hash table
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key
 *
 * Description: uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_dj2(key) % size);
}

#include"hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}

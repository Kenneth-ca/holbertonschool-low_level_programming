#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index in wich the key is
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int djb2 = 0;

	djb2 = hash_djb2(key);
	index = djb2 % size;

	return (index);
}

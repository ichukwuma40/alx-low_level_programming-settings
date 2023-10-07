#include "hash_tables.h"

/**
 * hash_djb2 - The Hash function implementing the djb2 algorithm.
 * @str: This is the string to hash.
 *
 * Return: This returns the  calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

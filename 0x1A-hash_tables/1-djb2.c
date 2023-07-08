/**
 * hash_djb2 - Hash function with djb2 algorithm implemented.
 * @str: Hash string.
 *
 * Return: Calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int has;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);

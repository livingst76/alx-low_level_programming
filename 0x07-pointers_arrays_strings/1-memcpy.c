/**
 * _memcpy - copy memory area.
 *
 * @dest: memory area to be copied to.
 * @src: memory area to be copied from.
 * @n: number of bytes to be copied.
 *
 * Return: ptr, pointer to copied memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++, dest++)
	{
		*dest = src[i];
	}

	return (ptr);
}

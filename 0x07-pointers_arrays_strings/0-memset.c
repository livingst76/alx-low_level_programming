/**
 * _memset - fill memory with constant byte
 *
 * @s: string
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: s, pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

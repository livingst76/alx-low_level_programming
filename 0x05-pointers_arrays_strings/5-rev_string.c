/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0, j = 0, n = 0;

	while (s[j])
	{
		j++;
	}

	n = j;

	while (i < n / 2)
	{
		s[i] ^= s[--j];
		s[j] ^= s[i];
		s[i] ^= s[j];
		i++;
	}
}

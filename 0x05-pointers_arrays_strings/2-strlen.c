/**
 * _strlen - get the length of a string
 *
 * @s: string to be worked on
 *
 * Return: len, length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}

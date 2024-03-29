/**
 * _strlen_recursion - get the length of a string recursively.
 *
 * @s: buffer.
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}

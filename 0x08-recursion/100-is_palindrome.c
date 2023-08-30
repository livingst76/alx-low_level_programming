void palindromity(char *s, int i, int *b);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if the string is empty(a palindrome)
 *
 * @s: string to be checked
 *
 * Return: 1, palindrome else, 0
 */
int is_palindrome(char *s)
{
	int len, boolean = 0;

	if (!*s)
		return (1);

	len = _strlen_recursion(s);
	palindromity(s, len - 1, &boolean);
	if (boolean)
		return (1);
	else
		return (0);
}

/**
 * _strlen_recursion - calculate the length of a string;
 *
 * @s: string
 *
 * Return: len, length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindromity - test string for palindromity
 *
 * @s: string
 * @i: string index
 * @b: pointer to boolean
 */
void palindromity(char *s, int i, int *b)
{
	if (i < 0)
		return;
	if (*s == s[i])
	{
		*b = 1;
	}
	else if (*s != s[i])
	{
		*b = 0;
		return;
	}

	palindromity(s + 1, i - 2, b);
}

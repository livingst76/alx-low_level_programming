void is_wildcmp(char *s, char *t, int i, int j, int n, int *b);
void _strcmp(char *s, char *t, int i, int *b);
int strlen_recursion(char *s, int *n);

/**
 * wildcmp - check if string can be considered identical: ignoring wildcard '*'
 *
 * @s1: string to be compared to
 * @s2: string to be compared
 *
 * Return: 1, considered identical else, 0
 */
int wildcmp(char *s1, char *s2)
{
	int len1, len2, boolean = 0, isWild = 0;

	if (!*s1 && !*s2)
		return (1);
	else if (!*s2)
		return (0);

	len1 = strlen_recursion(s1, 0);
	len2 = strlen_recursion(s2, &isWild);
	if (isWild)
		is_wildcmp(s1, s2, len2 - 1, len1 - 1, len2 - 1, &boolean);
	else if (!isWild && len1 == len2)
		_strcmp(s1, s2, len1 - 1, &boolean);
	else
		return (0);

	if (boolean)
		return (1);
	else
		return (0);
}

/**
 * strlen_recursion - calculate the length of a string;
 *
 * @s: string
 * @n: pointer to isWild
 *
 * Return: len, length of string
 */
int strlen_recursion(char *s, int *n)
{
	if (*s == '*')
		*n = 1;
	if (!*s)
		return (0);
	else
		return (1 + strlen_recursion(++s, n));
}

/**
 * is_wildcmp - check for identicality using wildcards '*'
 *
 * @s: string to be compared to
 * @t: string to be compared
 * @i: index of t
 * @j: index of s
 * @n: length of t
 * @b: pointer to boolean
 */
void is_wildcmp(char *s, char *t, int i, int j, int n, int *b)
{
	if ((t[n] == '*' && *t == '*') ||  (*t == '*' && !n))
	{
		*b = 1;
		return;
	}

	if (i < 0 || j < 0)
		return;

	if (t[i] == '*')
	{
		*b = 1;
	    is_wildcmp(s, t, --i, j, n, b);
	}
	else if (t[i] != '*' && t[i + 1] == '*')
	{
		if (t[i] == s[j])
		{
			*b = 1;
			is_wildcmp(s, t, i, --j, n, b);
		}
		else if (t[i] != s[j] && t[i] != s[j + 1] && t[i + 1] == '*')
			is_wildcmp(s, t, i, --j, n, b);
		else if (t[i] != s[j] && t[i] == s[j + 1])
			is_wildcmp(s, t, --i, j, n, b);
		else if (t[i] != s[j] && !j)
		{
			*b = 0;
			return;
		}
	}
	else if (t[i] != '*' && t[i + 1] != '*')
	{
		if (t[i] == s[j])
		{
			*b = 1;
			is_wildcmp(s, t, --i, --j, n, b);
		}
		else
		{
			*b = 0;
			return;
		}
	}
}

/**
 * _strcmp - compare strings using recursion
 *
 * @s: string to be compared to
 * @t: string to be compared
 * @i: string index
 * @b: pointer to boolean
 */
void _strcmp(char *s, char *t, int i, int *b)
{
	if (i < 0)
		return;
	if (s[i] == t[i])
	{
		*b = 1;
	}
	else if (s[i] != t[i])
	{
		*b = 0;
		return;
	}

	_strcmp(s, t, --i, b);
}

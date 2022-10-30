#include "main.h"

/**
 * rev_string - print inputed string as output in reverse order
 *
 * @s: inputed string
 */
void rev_string(char *s)
{
	char tmp, *p = s;
	int i = 0, n, len = 1;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	n = len;

	p--;
	while (n > 1)
	{
		if (*p != '0')
		{
			tmp = *p;
			*p = *(p - n);
			*(p - n) = tmp;
		}
		i++;
		p--;
		n = n - 2;
	}
}

#include "main.h"
#include <stdio.h>
/**
 * rev_string - print inputed string as output in reverse order
 *
 * @s: inputed string
 */
void rev_string(char *s)
{
	char tmp, *p = s;
	int i = 0, len = 0, n;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	n = len + 1;

	while (n >= 1)
	{
		if (n == len + 1)
		{
			*(p - n) = *p;
		}
		else
		{
			tmp = *p;
			*p = *(p - n);
			*(p - n) = tmp;
		}
		i++;
		p--;
		n -= 2;
	}
}

#include "main.h"

/**
 * set_string - set the value of a pointer to a char not pointer to pointer
 *
 * @s: value to be changed
 * @to: value to be changed to
 */
void set_string(char **s, char *to)
{
	*s = to;
}

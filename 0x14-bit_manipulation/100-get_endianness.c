/**
 * get_endianness - check the endianness of the machine
 *
 * Return: 0 (Big Endian), 1 (Little Endian).
 */
int get_endianness(void)
{
	int i = 1;

	if ((*(char *) &i) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

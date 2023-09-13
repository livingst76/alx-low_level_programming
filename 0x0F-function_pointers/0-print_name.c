/**
 * print_name - print name.
 *
 * @name: pointer to name to be printed
 * @f: pointer to name printing function
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

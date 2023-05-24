/**
 * print_name - prints a name.
 * @name: pointers to name.
 * @f: function pointer.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

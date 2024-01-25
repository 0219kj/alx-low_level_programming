/**
 * print_name: a function to print name
 * @name: name given
 * @f: function call back
 *
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

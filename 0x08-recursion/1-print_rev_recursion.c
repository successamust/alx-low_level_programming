#include "main.h"

/**
 * _print_rev_recursion - a function that print a strin in reverse
 * @s: string
 * return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

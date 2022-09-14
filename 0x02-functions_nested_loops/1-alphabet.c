
 #include"main.h"

/**
 * main-Entry point
 *
 * print_alphabet unsing putchar function
 *
 * return a-z
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}
_putchar ('\n');
}

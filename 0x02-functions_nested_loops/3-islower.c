#include"main.h"
/**
 * main - entry point
 * _islower - function to check for lowercase character.
 * @c: int used for argument function
 * return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


#include"main.h"
/**
 * _islower - function for checking lower case character.
 * @c: checks input of function
 * return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}


#include"main.h"

/**
 * main -point
 * Print_sign - this is a funtion to check the sign of a number
 * @n: int used for argument of a function.
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n <  0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar ('0');
	return (0);
	}
}

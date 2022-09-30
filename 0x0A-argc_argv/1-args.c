#include <stdlib.h>
#include <stdio.h>

/**
 * main - funtion that prints the number arguments passed into it
 * @argc: hoold the count of arguments
 * @argv: holds the array of argument passed
 *
 * Return 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}

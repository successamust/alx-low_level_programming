#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description - Print the value n
 *
 * Retun - (0) if successful
 */

int main(void)
{
	int n, LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;
	if (LD > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, LD);
	else if (LD == 0)
		printf("Last digit of %i is %i and is 0\n", n, LD);
	else if (LD < 6 && LD != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LD);

	return (0);
}


Search or jump to…
Pulls
Issues
Marketplace
Explore
 
@successamust 
iAmG-r00t
/
alx-low_level_programming
Public
Code
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x02-functions_nested_loops/103-fibonacci.c
@iAmG-r00t
iAmG-r00t fix code logic... 🐙😀😭👌
Latest commit 2b55f91 on Feb 16
 History
 1 contributor
34 lines (27 sloc)  443 Bytes

#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}

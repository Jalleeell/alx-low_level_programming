#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
*/

int main(void)
{
	unsigned long int m, n;

	n = 612852475143;

	for (m = 3; m < sqrt(n); m = m + 2)
	{
		while ((n % m == 0) && (n != m))
			n = n / m;
	}

	printf("%lu\n", n);
	return (0);
}

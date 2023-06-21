#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonnacci numbers starting with 1 and 2
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;
	unsigned long f1, f2, sum;

	f1 = 0;
	f2 = 1;

	for (n = 0; n < 50; n++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;
		if (n == 49)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

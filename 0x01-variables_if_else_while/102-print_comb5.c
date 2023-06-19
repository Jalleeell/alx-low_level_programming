#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that prints all possible combinations of two-two
 *		digit numbers
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int a, b;

	for (a = 0 ; a <= 98 ; a++)
	{
		for (b = a ; b <= 99 ; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + '0'); /*prints the tens of a*/
				putchar((a % 10) + '0'); /*prints the ones of a*/
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

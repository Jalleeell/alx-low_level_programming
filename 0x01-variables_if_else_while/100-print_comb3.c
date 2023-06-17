#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 *              separated by comma and space
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
	for (num2 = num1 + 1; num2 <= 9; num2++)
		{
		putchar(num1 + 48);
		putchar(num2 + 48);

			if (num1 + num2 != 17)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}


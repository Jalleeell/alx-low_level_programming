#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A c program that prints all possible
 *              different combinations of 3 digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a, b, c;

	a = 0;
	while (a <= 7) /*starts first digit from 0 to 7*/
	{
		b = a + 1;
		while (b <= 8) /*starts second digit from 1 to 8 */
		{
		c = b + 1;
			while (c <= 9) /*starts third digit from 2 to 9*/
			{
			/*prints the following characters*/
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');

				if (a + b + c != 24) /*if the condition true ',' and ' ' aren't printed*/
				{
				putchar(',');
				putchar(' ');
				}

			c++;
			}
		b++;
		}
	a++;
	}

	putchar('\n');
	return (0);
}

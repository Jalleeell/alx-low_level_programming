#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except e and q
 *
 * Return: 0 (success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
{
	/*if c equal to e or q skip and coninue*/
	if (c == 'e' || c == 'q')
		c++;
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}

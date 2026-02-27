#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);  /* first putchar */
		c--;
	}
	putchar('\n');   /* second putchar */

	return (0);
}

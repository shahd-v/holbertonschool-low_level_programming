#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		putchar(n + '0');  /* first putchar */
		n++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);        /* second putchar */
		c++;
	}

	putchar('\n');         /* third putchar */

	return (0);
}

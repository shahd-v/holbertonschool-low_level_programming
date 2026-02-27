#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');  /* first putchar */
		n++;
	}
	putchar('\n');          /* second putchar */

	return (0);
}

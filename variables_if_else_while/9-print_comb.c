#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');      /* first putchar */
		if (n != 9)
		{
			putchar(',');      /* second putchar */
			putchar(' ');      /* third putchar */
		}
		n++;
	}
	putchar('\n');              /* fourth putchar */

	return (0);
}

#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{

        int i;

	while (i != 2 && i != 4)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
	}
	else
	{
	continue;
	}

        _putchar('\n');
}

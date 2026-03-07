#include "main.h"

/**
 * more_numbers - prints numbers from 1 to 14 for 10 times
 */


void more_numbers(void)
{

	int l = 0;
	while (l < 11)
	{
		int i;
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		l++;
		_putchar('\n');	
	}
}

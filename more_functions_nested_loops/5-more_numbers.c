#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * You can only use _putchar three times per line
 */
void more_numbers(void)
{
	int l, i;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		_putchar('1'); /* tens digit */

		_putchar(i % 10 + '0'); /* ones digit */
	}
	_putchar('\n'); /* newline */
	}
}

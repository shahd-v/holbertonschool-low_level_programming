#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 11 times
 *
 * You can only use _putchar three times per line
 */
void more_numbers(void)
{
    int l, i;

    for (l = 0; l < 11; l++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i >= 10)
                _putchar('1');       // tens digit (only '1' because max is 14)

            _putchar(i % 10 + '0');  // ones digit

        }
        _putchar('\n');              // third _putchar per line
    }
}

#include "main.h"

/**
 * print_square - prints a square using the '#' character
 * @size: size of the square
 *
 * If size is 0 or less, only a newline is printed
 */
void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i++) /* iterate through rows */
    {
        for (j = 0; j < size; j++) /* iterate through columns */
            _putchar('#');

        _putchar('\n'); /* move to next line after each row */
    }
}

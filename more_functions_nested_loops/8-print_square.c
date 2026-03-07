#include "main.h"

/**
 * print_square - prints a square using the '#' character
 * @size: size of the square
 */
void print_square(int size)
{
    int i, j; /* 1 indentation level inside function */

    if (size <= 0)
    {
        _putchar('\n'); /* 2 indentation levels inside function block */
        return;
    }

    for (i = 0; i < size; i++) /* 1 indentation level inside function */
    {
        for (j = 0; j < size; j++) /* 2 indentation levels inside loop */
            _putchar('#'); /* 3 indentation levels inside inner loop */

        _putchar('\n'); /* 2 indentation levels inside outer loop */
    }
}

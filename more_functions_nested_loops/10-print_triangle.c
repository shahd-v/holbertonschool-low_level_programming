#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of size `size`
 * @size: the height and base width of the triangle
 *
 * Description: prints a triangle using '#' characters. 
 *              Each row ends with a newline. If size <= 0,
 *              prints only a newline.
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* print spaces before the hashes */
		for (col = 1; col <= size - row; col++)
			_putchar(' ');

		/* print the hashes */
		for (col = 1; col <= row; col++)
			_putchar('#');

		/* move to next line */
		_putchar('\n');
	}
}

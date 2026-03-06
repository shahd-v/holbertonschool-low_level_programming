#include "main.h"

/** _isdigit will check if c is a digit between 0 and 9
 * @c: input
 * Return: 0 for non digits and 1 for digits
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	return (0);
}

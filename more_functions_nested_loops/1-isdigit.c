#include <stdio main.h>

/* _is digit will check if c is a digit between 0 and 9 */

int _isdigit(int c)
{
	if (c>= 0 && c<=9)
		return (1);
	return (0);
}

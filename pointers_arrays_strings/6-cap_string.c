#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		/* Capitalize if it's a lowercase letter AND either first char
		   or comes after a separator */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 ||
			    str[i - 1] == ' '  || str[i - 1] == '\t' ||
			    str[i - 1] == '\n' || str[i - 1] == ','  ||
			    str[i - 1] == ';'  || str[i - 1] == '.'  ||
			    str[i - 1] == '!'  || str[i - 1] == '?'  ||
			    str[i - 1] == '"'  || str[i - 1] == '('  ||
			    str[i - 1] == ')'  || str[i - 1] == '{'  ||
			    str[i - 1] == '}')
			{
				str[i] -= 32;
			}
		}
		i++;
	}

	return (str);
}

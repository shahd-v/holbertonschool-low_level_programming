#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           containing a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *copy;
	int len = 0, i;

	/* Check for NULL input */
	if (str == NULL)
		return (NULL);

	/* Calculate length of the string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the copy (+1 for null terminator) */
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		copy[i] = str[i];

	/* Null-terminate the new string */
	copy[len] = '\0';

	return (copy);
}

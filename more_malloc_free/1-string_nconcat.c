#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: max bytes to use from s2
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, len1, len2, copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	copy = (n >= len2) ? len2 : n;

	result = malloc(len1 + copy + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < copy; i++)
		result[len1 + i] = s2[i];

	result[len1 + copy] = '\0';

	return (result);
}

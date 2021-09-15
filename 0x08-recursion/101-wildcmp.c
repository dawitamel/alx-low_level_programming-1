#include "main.h"
/**
 *wildcmp - compares 2 strings for similarity
 *@s1: first string
 *@s2: second string
 *
 *Return: 1 if the two strings are the same, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *origin = s1;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}

	else if (*s2 == '*')
		return (asterisks(s1, s2, origin));

	else
		return (0);
}

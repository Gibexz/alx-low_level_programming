#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: String to be compared
 * @s2: String to be compared
 *
 * Return: Diff (difference)
 */
int _strcmp(char *s1, char *s2)
{
	int i; /* for loop count */
	int diff; /* for differnce(in ascii value) */
		/* when characters compared are not equal */

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = 0;
		}
	}
	return (diff);
}

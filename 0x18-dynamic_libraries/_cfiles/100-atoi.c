#include "main.h"

/**
 * _atoi - converts the first set of digits in a string to
 * an integer while taking the sign into account
 * @s: String in to be worked on
 * Return: int containing converted number
 */
int _atoi(char *s)
{
	int index, index2;
	unsigned int res;
	char now;
	int sign = 1;

	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		now = *(s + index);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			index2 = index;
			while (*(s + index2) > 47 && *(s + index2) < 58)
			{
				res = (res * 10) + *(s + index2) - '0';
				index2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}

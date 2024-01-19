#include "main.h"
/**
 *_atoi - converts a string to an integer
 *@s: pointer
 *Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int min = 1;
	int k = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			k = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}
	j *= min;
	return (j);
}


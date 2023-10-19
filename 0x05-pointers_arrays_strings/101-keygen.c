#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random valid passwords for the program 101-crackme
 *Return: 0
 */
int main(void)
{
	char pw[100];
	int index = 0;
	int sum = 0;
	int half1;
	int half2;

	srand(time(0));

	while (sum < 2772)
	{
		pw[index] = 33 + rand() % 94;
		sum += pw[index++];
	}
	pw[index] = '\0';
	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;

	if ((sum - 2772) % 2 != 0)
		half1++;
	for  (index = 0; pw[index]; index++)
	{
		if (pw[index] >= (33 + half1))
		{
			pw[index] -= half1;
			break;
		}
	}
	for (index = 0; password[index]; index++)
	{
		if (pw[index] >= (33 + half2))
		{
			pw[index] -= half2;
			break;
		}
	}
	prinrf("%s", pw);
	return (0);
	}
}

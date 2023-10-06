#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description:“main” serves as the entry point of a C program
 *int main(void): the main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

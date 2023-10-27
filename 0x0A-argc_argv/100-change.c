#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins
 *to make change for an amount of money
 *@argv: array containing the command line arguments
 *@argc: number of command line arguments
 *Return: (0) for success and (1) if the number of
 *arguments passed to your program is not exactly 1
 */
int main(int argc, char *argv[])
{
	int cents, min_coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		min_coin += 1;
	}
	printf("%d\n", min_coin);
	return (0);
}

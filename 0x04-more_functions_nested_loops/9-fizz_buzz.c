#include <stdio.h>
#include "main.h"
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints the numbers from 1 to 100
 *
 *Return: always 0
 */
int main(void)
{
	int j;

	for (j = 1 ; j <= 100; j++)/*prints the numbers from 1 to 100*/
	{
		if (j % 3 == 0 && j % 5 == 0)/*multiples of both three and five*/
			printf("FizzBuzz");
		else if (j % 3 == 0)/* multiples of three*/
			printf("Fizz");
		else if (j % 5 == 0)/*multiples of five*/
			printf("Buzz");
		else
			printf("%d", j);
		if (j < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

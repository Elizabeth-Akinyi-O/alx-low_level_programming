#include "main.h"
#include <string.h>
/**
 *is_prime_number - returns 1 if the input integer
 *is a prime number, otherwise return 0
 *@n: input integer
 *Return: 0
 */
int is_prime_number(int n)
{
	int primeNumber = 0;

	if (n < 2)
		primeNumber = 0;
	else if (n == 2)
		primeNumber = 1;
	else if (n % 2 == 1)
		primeNumber = 1;
	return (primeNumber);
}


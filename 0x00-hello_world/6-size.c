#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description:“main” serves as the entry point of a C program
 *int main(void): main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

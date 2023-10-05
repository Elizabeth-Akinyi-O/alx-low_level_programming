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
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an unasigned char: %lu bytes\n", sizeof(unsigned char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));
	return (0);
}

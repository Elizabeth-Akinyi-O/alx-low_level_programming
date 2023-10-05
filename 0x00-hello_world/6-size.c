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
	printf("Character Size: %lu bytes\n", sizeof(char));
	printf("Unsigned Character Size: %lu bytes\n", sizeof(unsigned char));
	printf("Integer Size: %lu bytes\n", sizeof(int));
	printf("Short Size: %lu bytes\n", sizeof(short));
	printf("Unsigned Short Size: %lu bytes\n", sizeof(unsigned short));
	printf("Long Size: %lu bytes\n", sizeof(long));
	printf("Float Size: %lu bytes\n", sizeof(float));
	printf("Unsigned Integer Size: %lu bytes\n", sizeof(unsigned int));
	printf("Unsigned Long Size: %lu bytes\n", sizeof(unsigned long int));
	return (0);
}

#include <stdio.h>
/**
 *main - prints its name, followed by a new line
 *@argv: array containing the command line arguments
 *@agrc: number of command line arguments
 *Return: 0
 */
int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}


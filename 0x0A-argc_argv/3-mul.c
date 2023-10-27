#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers and prints the result of the multiplication
 *@argv: array containing the command line arguments
 *@argc: number of command line arguments
 *Return: (0) for sucess and (1) for error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

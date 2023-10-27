#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers
 *@argv: array containing the command line arguments
 *@argc: number of command line arguments
 *Return: (0) if  no number is passed to the program,
 *(1) if one of the numbers is not digits
 */
int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}

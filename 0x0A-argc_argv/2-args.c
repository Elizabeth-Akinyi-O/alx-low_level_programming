#include <stdio.h>
/**
 *main -  prints all arguments it receives
 *@argv: array containing the command line arguments
 *@argc: number of command line arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *print_opcodes - prints opcodes
 *@addr: address of the main function
 *@bytes: number of bytes to print
 *Return: void
 */
void print_opcodes(char *addr, int bytes)
{
	int a;

	for (a = 0; a < bytes; a++)
	{
		printf("%.2hhx", addr[a]);
		if (a < bytes - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 *main - prints the opcodes of its own main function
 *@argc: count
 *@argv: vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, bytes);
	return (0);
}

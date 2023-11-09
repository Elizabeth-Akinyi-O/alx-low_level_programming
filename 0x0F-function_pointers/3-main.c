#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - program that performs simple operations
 *@argc: argument count
 *@argv: argument vector
 *Return: calculations
 */
int main(int argc, char *argv[])
{
	char *op;/* operator */
	int a, b;/* inputs */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = (argv[2]);
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}

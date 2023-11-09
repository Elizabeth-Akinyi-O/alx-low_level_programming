#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - adds two numbers
 *@a: input1
 *@b: input2
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two numbers
 *@a: input1
 *@b: input2
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two numbers
 *@a: input1
 *@b: input2
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides two numbers
 *@a: input1
 *@b: input2
 *Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - returns remainder of two numbers
 *@a: input1
 *@b: input2
 *Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}

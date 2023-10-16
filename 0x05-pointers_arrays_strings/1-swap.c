 #include "main.h"
/**
 *swap_int - waps the values of two integers
 *@a: new address of b
 *@b: new adress of a
 *Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}

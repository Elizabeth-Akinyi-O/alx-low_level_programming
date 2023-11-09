#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func - selects the correct function
 *to perform the operation asked by the user
 *@s: argument
 *Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	
	/*declare array*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0; /* initializing i */
	/**
	 *If s does not match any of the 5 expected
	 *operators (+, -, *, /, %), return NULL
	 */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	/* return operation */
	return (ops[i].f);
}

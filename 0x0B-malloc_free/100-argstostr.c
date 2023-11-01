#include "main.h"
#include <stdlib.h>
/**
 **argstostr - concatenates all the arguments of your program
 *@av: vector
 *@ac: count
 *Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	/**
	 *a prints count, b prints the string, k prints the string
	 *after concatenation,length(of the strings)
	 */
	int a, b, c = 0, length = 0;
	/*checks argc and argv are null*/
	if (ac == 0 || av == NULL)
		return (NULL);
	/*create a loop to check the count(argc)*/
	for (a = 0; a < ac; a++)
	{
		/*create a loop to check each string(argv)*/
		for (b = 0; av[a][b]; b++)
		{
			length++;/*gets the length of each vector(string)*/
		}
	}
	length += ac;/*add and assign NULL to each vector*/
	/*allocate memory using lengthe + 1*/
	ptr = malloc(length + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/*concatenate ac and av*/
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		if (ptr[c] == '\0')
		{
			ptr[c++] = '\n';
		}
	}
	return (ptr);
}

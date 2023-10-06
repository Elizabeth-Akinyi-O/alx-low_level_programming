 #include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints all single digit numbers of base 10 starting from 0
 *int main(void): the main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
		printf("\n");
	}
	return (0);
}

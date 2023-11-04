#include "main.h"
#include <stdlib.h>
/**
 ***alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of the 2D array
 *@height:height of the 2D array
 *Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int a  = 0, b = 0;
	/*checking if the width and height are 0 || -ve*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(sizeof(int) * width);
		if (matrix[a] == NULL)
		{
			if (a == 0)
				free(matrix);
			if (a > 0)
			{
				for (b = a; b >= 0; b--)
				{
					free(matrix[b]);
				}
				free(matrix);
			}
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			matrix[a][b] = 0;
		}
	}
	return (matrix);
}

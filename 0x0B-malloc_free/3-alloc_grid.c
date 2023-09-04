#include <stdlib.h>

/**
 * alloc_grid - create a two dimensional array; initialize all elements to 0.
 *
 * @width: column.
 * @height: row.
 *
 * Return: pointer to two dimensional array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **pp;

	if (width < 1 || height < 1)
		return (NULL);

	pp = malloc(height * sizeof(int *));
	if (pp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pp[i] = malloc(width * sizeof(int));
		if (pp[i] == NULL)
		{
			i++;
			while (i--)
			{
				free(pp[i]);
			}
			free(pp);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			pp[i][j] = 0;
		}
	}
	return (pp);
}

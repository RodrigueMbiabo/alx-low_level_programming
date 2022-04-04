#include "main.h"
#include <stdlib.h>

/**
 * Float like a butterfly, sting like a bee
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
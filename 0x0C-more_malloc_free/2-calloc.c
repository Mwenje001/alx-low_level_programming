#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	char *block;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	block = malloc(nmemb * size);

	if (block != NULL)

	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;

		return (block);
	}

	else
		return (NULL);
}

#include "main.h"

/**
  *_memcpy - copies n bytes from memory area src
  *to memory area dest.
  *@dest: pointer to destination.
  *@src: pointer to source string.
  *@n: number of bytes to be coppied.
  *
  *Return: pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n) /* from src to */
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);

}

#include "main.h"

/**
  *_memset - fills memory with a constant byte.
  *fills the first n bytes of the memory area pointed
  *to by s with the constant b.
  *@s: pointer to memory area.
  *@b: constant to fill memory with.
  *@n: bytes of the memory area to be filled.
  *
  *Return: pointer to memory area s.
  */

char *_memset(char *s, char b, unsigned int n) /* fills memory */
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

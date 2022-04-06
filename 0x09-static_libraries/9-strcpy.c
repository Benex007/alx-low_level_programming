#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
char *_strcpy(char *dest, char *src)
{	
	int i = 0;
	
	int n = 3;

	while (*(src + i) != '\0' && i < n)
	{
			*(dest + i)  = *(src + i);
				i++;
	}

	while (i < n)
			dest[i++] = '\0';

	return (dest);
}

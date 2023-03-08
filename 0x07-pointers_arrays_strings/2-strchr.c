#include <stdio.h>
#include <string.h>
/**
*_strchr a predefined function used for finding the occurence
*
*@s: array input.
*
*@c: charchter search
*return: slice of arr
*/


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}

#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
*string_toupper - make string string_toupper
*arr: array of charachter
*return: arr as upper
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}

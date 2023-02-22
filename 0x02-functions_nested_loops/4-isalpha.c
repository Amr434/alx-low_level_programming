#include "main.h"
#include <ctype.h>

/**
*_isalpha-check if input is alpha or not
*@c is  input  user enter it
*_isalph return 1 if isalpha 0 if not
*/
int _isalpha(int c)
{
if (isalpha(c) > 0)
{
return (1);
}
else
{
return (0);
}
}

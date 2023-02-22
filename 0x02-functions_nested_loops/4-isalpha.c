#include "main.h"
#include <ctype.h>

/**
*_isalpha-check if input is alpha or not
*
*@c is input
*
*return 1 if is alph 0 if not
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

#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*
*_islower-check if c is lower or not
*@c is charchter input 
*return 1 if lower 0 if not
*/
int _islower(int c)
{
if (islower(c) > 0)
{
return (1);
}
else

{
return (0);
}
}

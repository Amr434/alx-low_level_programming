#include "main.h"
/**
*swap_int - function swap two number
*@a: is an first input
*@b: is second argu
*/
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}

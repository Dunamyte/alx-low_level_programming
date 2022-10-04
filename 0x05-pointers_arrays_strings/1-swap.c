#include "main.h"

/**
*swap_int - swap the values of two integers.
*
*@a : 1 pointer
*@b : 2 pointer
* Return (0)
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}


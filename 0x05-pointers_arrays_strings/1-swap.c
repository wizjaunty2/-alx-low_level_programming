#include <stdio.h>

/**
* swap_int - swaps the values of two integers
* @a: integer to swap
* @b: integer to swap
* Return: Always 0.
* @a: pointer to int *a
* @b: pointer to int *b
*/

void swap_int(int *a, int *b)
{
int swp = *a;
*a = *b;
*b = swp;
}

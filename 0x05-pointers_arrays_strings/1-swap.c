#include <stdio.h>

/**
* main - check the code
* Return: Always 0.
* swap_int - swaps the values of two integers.
*/

void swap_int(int *a, int *b)
{
int swp = *a;
*a = *b;
*b = *swp;
}

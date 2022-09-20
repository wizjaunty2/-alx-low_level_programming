#include <stdio.h>

/**
* main - check the code
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

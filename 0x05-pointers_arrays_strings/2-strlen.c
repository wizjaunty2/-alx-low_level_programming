De#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

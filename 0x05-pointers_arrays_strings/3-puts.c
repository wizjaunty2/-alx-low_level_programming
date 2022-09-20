#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		put(*str++);

	put('\n');
}

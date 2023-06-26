#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\n');
	{
	_putchar(*str);
	}
	_putschar('\n');
}

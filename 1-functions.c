#include "main.h"

/**
 * p_char - prints a given character
 * @arg: the char to be printed
 * Return: value of 1 on success
 */

int p_char(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}


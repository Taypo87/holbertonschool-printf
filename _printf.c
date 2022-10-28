#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - prints a string of any type and varying size
 * @format: pointer to the string to be printed
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list arg;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		while (format[i] != '%')
		{
			putchar(format[i]);
			i++;
		}

		i++;
		putchar (get_p_func(*(format + i), arg));

		if (format[i + 1] == '\0')

			return(0);
	}
	va_end(arg);
	return(0);
}

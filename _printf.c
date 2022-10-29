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
	unsigned int i = 0, count = 0;
	va_list arg;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == '%')
			putchar(format[i + 1]);
		if (format[i] == '%')
		{
			i++;
			count += get_p_func(format[i], arg);
		}
		i++;
		count++;
	}
	va_end(arg);
	return (count);
}

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
	const char *str;
	unsigned int i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (str = format; *str != '\0'; str ++)
	{
		while (*str != '%')
		{
			putchar(*str);
			str++;
		}

		str++;
		switch(*str)
		{
		case 'c' : i = va_arg(arg, int);
			putchar (i);
			break;

		case 's' : s = va_arg(arg, char *);
			puts(s);
			break;
		}
	}
	va_end(arg);
	return (0);
}

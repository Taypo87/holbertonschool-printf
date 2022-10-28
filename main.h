#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct p_func - defines a new type struct
 * @t: is char
 * @f:function associated with the char
 */


typedef struct p_func
{
	char t;
	int (*f)(va_list ptr);
} p_func;

int p_string(va_list arg);
int _printf(const char *format, ...);
int get_p_func(const char c, va_list arg);
char *convert(unsigned int num, int base);
int p_char(va_list arg);

#endif

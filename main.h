#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

typedef struct p_func{
	char t;
	int(*f)(va_list ptr);
}p_func;

int _printf(const char *format, ...);
int get_p_func(const char c, va_list arg);
char *convert(unsigned int num, int base);
int p_char(va_list arg);

#endif

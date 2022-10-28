#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

typedef struct p_func{
	char *t;
	int(*f)(va_list ptr);
}p_func;

int _printf(const char *format, ...);
char *convert(unsigned int num, int base);


#endif

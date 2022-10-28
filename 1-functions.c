#include "main.h"

int p_char(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}
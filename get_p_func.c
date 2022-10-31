#include "main.h"
#include <stdlib.h>
/**
 * get_p_func - selects proper function to handle arg type for _printf
 * @b: pointer to char in struct p_func
 * @arg: arguments
 * Return: 0 if succeessful
 */

int get_p_func(const char b, va_list arg)
{
	int i = 0;
	int j = 0;

	p_func func[] = {
		{'s', p_string},
		{'c', p_char},
		{'%', p_perc},
		{'i', p_int},
		{'d', p_int}};

	while (func[i].t != 0)
	{
		if (func[i].t == b)
		{
			return (func[i].f(arg) + j);
		}
		i++;
	}
	return (0);
}

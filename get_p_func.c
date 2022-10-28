#include "main.h"
#include <stdlib.h>
int get_p_func(const char b, va_list arg)
{
	int i = 0;
	int j = 0;

	p_func func[] = {
		{'s', p_char},
		{'c', p_char}};

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

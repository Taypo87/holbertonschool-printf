#include "main.h"

int get_p_func(const char c, va_list arg)
{
	int i = 0;

	p_func func[] = {
		{'c', p_char}};

	while (func[i].t != 0)
	{
		if (func[i].t == c)
		{
			return (func[i].f);
		}
		i++;
	}
	return (0);
}

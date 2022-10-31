#include "main.h"

/**
 * p_int - prints an int of variable length
 * @arg: argument to be printed
 * Return: number of characters
 */


int p_int(va_list arg)
{
	int d = 1, len = 0;
	int n = va_arg(arg, int);


	if  (n == 0)
	{
		putchar('0');
		return (1);
	}

	if (n < 0)
	{
		putchar('-');
		len++;
		n = -n;
	}

	while (n / d > 9)
		d *= 10;

	while (d != 0)
	{
		putchar('0' + n / d);
		len++;
		n %= d;
		d /= 10;
	}

	return (len);
}

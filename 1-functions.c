#include "main.h"

/**
 * p_char - prints a given character
 * @arg: the char to be printed
 * Return: value of 1 on success
 */

int p_char(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}

/**
 * p_string - prints string
 * @arg: arguement
 * Return: number of printed characters
 */
int p_string(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}

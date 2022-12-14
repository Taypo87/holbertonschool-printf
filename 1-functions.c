#include "main.h"
#include <unistd.h>
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
		s = "(null)";
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * p_perc - prints percent
 * @arg: argument
 * Return: 1
 */

int p_perc(va_list arg)
{
	if (arg != NULL)

		putchar('%');

	return (1);
}

#include "holberton.h"

/**
 * sr_print - prints strings in reverse
 * @str: string
 *
 * Return: integer
 */
int sr_print(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = (count - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (count);
}

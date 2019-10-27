#include "holberton.h"

/**
 * c_print - prints chars
 * @character: integer
 * Return: integer
 */
int c_print (int character)
{
	_putchar((char) character);
	return (1);
}

/**
 * s_print - prints strings
 * @str: string
 * Return: integer
 */
int s_print(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}

/**
 * p_print - prints percent
 *
 * Return: integer
 */
int p_print()
{
	_putchar('%');
	return (1);
}

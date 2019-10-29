#include "holberton.h"

/**
 * c_print - prints chars
 * @character: integer
 *
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
 *
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
int p_print(void)
{
	_putchar('%');
	return (1);
}

/**
 * id_print - prints percent i and percent d
 * @n: the integer to print
 * @count: the total number of length in the string
 *
 * Return: integer
 */
int id_print(int n, int count)
{
	unsigned int m;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	m = n;
	if (m / 10)
		id_print(m / 10, count + 1);
	_putchar(m % 10 + '0');

	return (count);
}

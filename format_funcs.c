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
 */
void id_print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		_putchar((n / 10) + '0');
	_putchar(n % 10 + '0');
}

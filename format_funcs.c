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
void id_print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		id_print(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * count_int - counts num len of int
 * @n: the integer to print
 *
 *
 * Return: integer
 */
int count_int(int n)
{
	int count = 0;

	if (n < 0)
		++count;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return count; 	
}

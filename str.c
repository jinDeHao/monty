#include "monty.h"

/**
 * _isdigit - is digit
 * @c: character
 * Return: 1 or 0 if not
*/
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57) || c == '-')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * isinteger - is integer
 * @str: string
 * Return: 0 if is not int
*/
int isinteger(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

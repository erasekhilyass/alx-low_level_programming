#include "main.h"
/**
  * _isalpha - shows 1 if it is a letter
  * another case. shows 0
  * @c: the character is ASCII code.
  * Return: 1 for letters. 0 for the rest.
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	{
		return (0);
	}
	_putchar('\n');
}

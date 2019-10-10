#include "holberton.h"
/**
  * is_palindrome - print
  * @s:take a pointer
  * Return: 1 o 0
  */
int is_palindrome(char *s)
{
	int c = is_rec(s);

	if (c == 0)
		return (1);
	else
		return (is_pali(s, c));
}
/**
 * is_pali - funcion
 * @s: take a pointer
 * @c: take a int
 * Return: 0 or 1
 */
int is_pali(char *s, int c)
{
	if (c <= 1)
		return (1);
	else if (*s == *(s + c - 1))
		return (is_pali(s + 1, c - 2));
	else
		return (0);
}
/**
  * is_rec - is the cont
  * @s: take a pointer
  * Return: 0 or is_rec
  */
int is_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (is_rec(s + 1) + 1);
}

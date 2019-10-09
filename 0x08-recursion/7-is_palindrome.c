#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - Main
 *
 * @s: string
 *
 * Return: 1 for palindrome
 */
int is_palindrome(char *s)
{
	int a, b;

	a = go_over_string(s, 0) - 1;
	b = _compar(s, 0, a);
	return (b);
}
/**
 * go_over_string - Syze
 * @s: string
 * @i: index
 * Return: 1 for palindrome
 */
int go_over_string(char *s, int i)
{
	int a;


	if (s[i] != '\0')
	{
		a = 1 + go_over_string(s, i + 1);
	}
	else
		return (0);

	return (a);

}
/**
 * _compar - palindrome
 * @s: string
 * @i: indrex
 * @j: size
 * Return: 1 for palindrome
 */
int _compar(char *s, int i, int j)
{
	int a;

	if (i >= j)
		return (1);

	if (s[i] == s[j])
	{
		a = _compar(s, i + 1, j - 1);
	}

	if (a == 1)
		return (1);

	return (0);
}

#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string char for lenght calc
 *
 * Return: 0 or len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_for_palindrome - checks recursively if character is a palindrome
 * @s: string to check
 * @i: iterator
 * @len: lenght of the string
 *
 * Return: 0, 1, pal char
 */
int check_for_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_for_palindrome(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string character
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_for_palindrome(s, 0, _strlen_recursion(s)));
}

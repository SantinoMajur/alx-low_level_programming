#include "main.h"
/**
 * find_strlen - returns length of a string
 * @str: the string to get the length
 *
 * Return: Length of a string
 */
int find_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + find_strlen(str + 1));
}
/**
 * check_palindrome - checks if a string is a palindrome
 * @str: string to check
 * @i: the length of string
 * @n: The index of a string
 *
 * Return: 1 if palindrome 0 otherwise
 */
int check_palindrome(char *str, int i, int n)
{
	if (str[n] == str[i / 2])
		return (1);
	else if (str[n] == str[i - n - 1])
		return (check_palindrome(str, i, n + 1));
	return (0);
}
/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int n;
	int i = find_strlen(s);

	n = 0;
	if (!(*s))
		return (1);
	return (check_palindrome(s, i, n));
}

#include "holberton.h"
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: length of string or return 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
int compare(int length, char *s, int i);
/**
 * compare - compares elements in a string
 * @s: string for comparision
 * @length: length of string
 * @i: index
 * Return: return 1, otherwise 0
 */
int compare(int length, char *s, int i)
{
	if (s[i] != s[length - i])
		return (0);
	if (i == length)
		return (1);
	return (compare(length, s, i + 1));
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string to check
 *
 * Return: return 1, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(_strlen_recursion(s) - 1, s, 0));
}

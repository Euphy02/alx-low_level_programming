#include "main.h"

/**
 * _strchrn- Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[1] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
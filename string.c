#include "main.h"

/**
 * _cmpdir - strings compare to find dir.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: if match and any other number else otherwise.
 */
int _cmpdir(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 3)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * charput - write characters like putchar
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int charput(char c)
{
	return (write(1, &c, 1));
}

/**
 * place - similar to puts in C
 * @str: a pointer the integer we want to set to 402
 *
 * Return: int
 */
void place(char *str)
{
	while (*str != '\0')
	{
		charput(*str);
		str++;
	}
}

/**
 * _strlen - Len string.
 * @str: a string.
 * Return: Length.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * str_concat - concatane strings.
 * @s1: first string.
 * @s2: second string.
 * Return: strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int len1, len2, j, i, e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);

	len2 = _strlen(s2);

	a = malloc(((len1) + (len2) + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
	{
		a[j] = s1[j];
	}

	for (i = len1, e = 0; e <= len2; i++, e++)
	{
		a[i] = s2[e];
	}
	return (a);
}

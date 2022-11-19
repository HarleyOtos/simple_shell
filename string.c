#include "main.h"

// /**
//  * _strcmpdir - strings compare to find dir.
//  *
//  * @s1: first string.
//  * @s2: second string.
//  *
//  * Return: if match and any other number else otherwise.
//  */
// int _strcmpdir(char *s1, char *s2)
// {
// 	int i = 0;

// 	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
// 	{
// 		if (i == 3)
// 			break;
// 		i++;
// 		s2++;
// 	}

// 	return (*s1 - *s2);
// }

// /**
//  * charput - write characters like putchar
//  * @c: The character to print
//  *
//  * Return: On success 1.
//  * On error, -1 is returned, and errno is set appropriately.
//  */
// int charput(char c)
// {
// 	return (write(1, &c, 1));
// }

// /**
//  * place - similar to puts in C
//  * @str: a pointer the integer we want to set to 402
//  *
//  * Return: int
//  */
// void place(char *str)
// {
// 	while (*str != '\0')
// 	{
// 		charput(*str);
// 		str++;
// 	}
// }

// /**
//  * _strlen - Len string.
//  * @str: a string.
//  * Return: Length.
//  */
// int _strlen(char *str)
// {
// 	int i;

// 	for (i = 0; str[i] != '\0'; i++)
// 		;

// 	return (i);
// }

// /**
//  * str_concat - concatane strings.
//  * @s1: first string.
//  * @s2: second string.
//  * Return: strings.
//  */
// char *str_concat(char *s1, char *s2)
// {
// 	char *a;
// 	int len1, len2, j, i, e;

// 	if (s1 == NULL)
// 		s1 = "";

// 	if (s2 == NULL)
// 		s2 = "";

// 	len1 = _strlen(s1);

// 	len2 = _strlen(s2);

// 	a = malloc(((len1) + (len2) + 1) * sizeof(char));

// 	if (a == NULL)
// 		return (NULL);

// 	for (j = 0; j < len1; j++)
// 	{
// 		a[j] = s1[j];
// 	}

// 	for (i = len1, e = 0; e <= len2; i++, e++)
// 	{
// 		a[i] = s2[e];
// 	}
// 	return (a);
// }


/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @s1: the first strang
 * @s2: the second strang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

#include "shell.h"

/**
 * _strdup - that returns a pointer to a newly allocated space in memory
 * @str : size array
 * Return: char is par or 0
*/
char *_strdup(const char *str)
{
	int x, l;
	char *now;

	if (!str)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0';)
	{
		l++;
	}
	now = malloc(sizeof(char) * l + 1);
	if (!now)
	{
		return (NULL);
	}
	for (x = 0; x < l; x++)
	{
		now[x] = str[x];
	}
	now[l] = str[l];
	return (now);
}
/**
 * _strcmp - compares two strings.
 * @s1: one string
 * @s2: two string
 * Return: value of int
 */
int _strcmp(char *s1, char *s2)
{
int cmp;

cmp = (int)*s1 - (int)*s2;
while (*s1)
{
if (*s1 != *s2)
break;
s1++;
s2++;
cmp = (int)*s1 - (int)*s2;
}
return (cmp);
}
/**
 ** _strlen - it gives the length of a string
 ** @s: pointer to the string
 ** Return: the length of string
 **/
int _strlen(char *s)
{
int len = 0;

while (*(s + len) != '\0')
len++;
return (len);
}
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: strint 2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
int x, y, z;

	i = 0, y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
		y++;
	for (z = 0; z <= y; z++, x++)
		dest[x] = src[z];
	return (dest);

}
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */

char *_strcpy(char *dest, char *src)
{
int x;

	for (x = 0; x <= _strlen(src); x++)
	{
		dest[x] = src[x];
	}
	return (dest);

}

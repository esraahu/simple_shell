#include "main.h"

/**
 * tokenizer - splits a commant string
 * @lne: one string
 * Return: value of char
 */
char **tokenizer(char *lne)
{
	char *token = NULL, *temp = NULL, del[] = {" \t\n"};
	char **commant = NULL;
	int x = 0, cpt = 0;

if (!lne)
	return (NULL);

temp = _strdup(lne);
token = strtok(temp, del);

if (token == NULL)
{
	free(lne), lne = NULL;
	free(temp), temp = NULL;
	return (NULL);
}
while (token)
{
	cpt++;
	token = strtok(NULL, del);
}
free(temp), temp = NULL;
commant = malloc(sizeof(char *) * (cpt + 1));
if (!commant)
{
	free(lne), lne = NULL;
	return (NULL);
}
token = strtok(lne, del);
while (token)
{
	commant[x] = _strdup(token);
	token = strtok(NULL, del);
	x++;
}
free(lne), lne = NULL;
commant[x] = NULL;
return (commant);
}

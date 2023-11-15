#include "shell.h"

/**
 * **tokenizer - splits a string into words. Repeat delimiters are ignored
 * @line: the input string
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **tokenizer(char *line)
{
char *token = NULL, tmp = NULL;
char **command = NULL;
int cpt = 0, x = 0;

if (!line)
return (NULL);
tmp = _strdup(line);

token = strtok(tmp, DELIM);
if (token == NULL)
{
free(line), line = NULL;
free(tmp), tmp = NULL;
return (NULL);
}
while (token)
{
cpt++;
token = strtok(NULL, DELIM);
}
free(tmp), tmp = NULL;

command = malloc(sizeof(char *) * (cpt + 1));
if (!command)
{
free(line), line = NULL;
return (NULL);
}
token = strtok(line, DELIM);
while (token)
{
command[x] = _strdup(token);
token = strtok(NULL, DELIM);
x++;
}

free(line), line = NULL;
command[x] = NULL;
return (command);
}

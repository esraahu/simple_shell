#include "shell.h"

/*
 * *read_line - line-by-line parsing utility
 * Return: a pointer to an array of strings, or NULL on failure
*/

char *read_line(void)
{
char *line = NULL;
size_t len = 0;
ssize_t l;

if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);
l = getline(&line, &len, stdin);
if (l == -1)
{
free(line);
return (NULL);
}
}

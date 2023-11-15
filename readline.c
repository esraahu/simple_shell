#include "shell.h"

/**
 * *read_line -  reads the input string
 * Return: value of input string
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

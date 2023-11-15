#include "main.h"

/**
 ** _envCommands - that env the shell
 ** @commd: pointer to the string
 ** @st: status
 **/
void _envCommands(char **commd, int *st)
{
int x = 0;

while (environ[x])
{
	write(STDOUT_FILENO, environ[x], _strlen(environ[x]));
	write(STDOUT_FILENO, "\n", 1);
	x++;
}
freearrayofstring(commd);
(*st) = 0;
}

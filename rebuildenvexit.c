#include "main.h"

/**
 * rebuild - call is a funs exit or env
 * @commd: pointer to the string
 * Return: integer
 */
int rebuild(char *commd)
{
char *buildstring[] = {"env", "exit", NULL};
int x = 0;

while (buildstring[x])
{
	/* code */
	if (_strcmp(commd, buildstring[x]) == 0)
		return (1);
	x++;
}
return (0);

}

/**
 * callevnorexit - call is a funs exit or env
 * @commd: pointer to the string
 * @st: status
 */
void callevnorexit(char **commd, int *st)
{
if (_strcmp(commd[0], "env") == 0)
{
	/* code */
	_envCommands(commd, st);
}
else if (_strcmp(commd[0], "exit") == 0)
{
	/* code */
	_exitsCommands(commd, st);
}
}

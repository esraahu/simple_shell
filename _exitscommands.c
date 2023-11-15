#include "main.h"

/**
 ** _exitsCommands - that exits the shell
 ** @commd: pointer to the string
 ** @st: status
 **/
void _exitsCommands(char **commd, int *st)
{
	freearrayofstring(commd);
	exit(*st);
}

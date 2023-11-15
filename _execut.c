#include "main.h"

/**
 * _execut - executes a command
 * @commt: char car
 * @argv: char var
 * Return: value of input int
 */
int _execut(char **commt, char **argv)
{
pid_t child;
int statu;
child = fork();

if (child == 0)
{
	if (execve(commt[0], commt, environ) == -1)
	{
		/* code*/
		perror(argv[0]);
		freearrayofstring(commt);
		exit(127);
	}
}
else
{
	waitpid(child, &statu, 0);
	freearrayofstring(commt);
}
return (WEXITSTATUS(statu));

}

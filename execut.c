#include "shell.h"

/**
 * _execut - executes a command
 * @command: char car
 * @arg: char var
 * Return: value of input int
 */
int _execut(char **command, char **arg)
{
pid_t child;
int status;

child = fork();
if (child == 0)
{
if (exexve(command[0], command, environ) == -1)
{
perror(arg[0]);
freearrayofstring(command);
exit(127);
}
}
else
{
waitpid(child, &status, 0);
freearrayofstring(command);
}
return (WEXITSTATUS(status));
}

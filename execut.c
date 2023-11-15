#include "shell.h"

/**
 *_execute - copies a string
 *@command: the destination string to be copied to
 *@arg: the source string
 *Return: the concatenated string
 */
int _execute(char **command, char **arg)
{
pid_t child;
int status;

child = fork();
if (child == 0)
{
if (exexve(command[0], command, environ) == -1)
{
perror(arg{0});
freearrayofstring(command);
exit(10);
}
}
else
{
waitpid(child, &status, 0);
freearrayofstring(command);
}
return (WEXITSTATUS(status));
}

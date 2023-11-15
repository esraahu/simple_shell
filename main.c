#include "shell.h"

/**
*main - simple shell main function
*@ca: count of arguments
*@arg: Arguments
*Return: 0 Always (success).
*/

int main(int ca, char **arg)
{
char *line = NULL;
char **command = NULL;
int x, status = 0;
(void) ca;


while (1)
{
line = read_line();
if (line == NULL)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (status);
}

command = tokenizer(line);
if (!command)
continue;

status = _execute(command, arg);
}

}

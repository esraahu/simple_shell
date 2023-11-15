#include "main.h"

/**
 * main - reads the input string
 * @ca: length arr
 * @arg: array
 * Return: value of input int
 */

int main(int ca, char **arg)
{
char *line = NULL;
char **command = NULL;
int status = 0;
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
if (rebuild(command[0]))
	callevnorexit(command, &status);
else

status = _execut(command, arg);
}

}

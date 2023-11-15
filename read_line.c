#include "main.h"

/**
 * read_line -  reads the input string
 * Return: value of input string
 */
char *read_line(void)
{
	char *Line = NULL;
	size_t leng = 0;
	ssize_t n;


	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	n = getline(&Line, &leng, stdin);
	if (n == -1)
	{
		free(Line);
		return (NULL);
	}
	return (Line);
}

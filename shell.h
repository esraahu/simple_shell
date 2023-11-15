#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>


extern char **environ;

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *read_line(void);
void freearrayofstring(char **arr);
char **tokenizer(char *lne);
int _execut(char **comt, char **argv);
void _exitsCommands(char **comm, int *st);
void _envCommands(char **comm, int *st);
int rebuild(char *commd);
void callevnorexit(char **commd, int *st);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

#endif

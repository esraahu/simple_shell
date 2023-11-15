#include "shell.h"

void freearrayofstring(char **arr)
{
int x;
if (!arr)
return;

for (x = 0; arr[x]; x++)
{
free(arr[x]);
arr[x] = NULL;
}
free(arr), arr = NULL;
}

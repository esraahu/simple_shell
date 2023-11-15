#include "main.h"


/**
 * freearrayofstring - free 2d array string
 * @arra: char ar
*/
void freearrayofstring(char **arra)
{
int x;

if (!arra)
	return;

for (x = 0; arra[x]; x++)
{
free(arra[x]);
arra[x] = NULL;
}
free(arra);
arra = NULL;
}

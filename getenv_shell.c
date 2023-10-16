#include "shell.h"
/**
 * _getenv - this is function print enviroment
 * @val: this values
 * Return: enve
*/
char *_getenv(char *val)
{
char *copy, *value, *key, *env;
int i;
for (i = 0; environ[i]; i++)
{
copy = _strdup(environ[i]);
key = strtok(copy, "=");
if (_strcmp(key, val) == 0)
{
value = strtok(NULL, "\n");
env = _strdup(value);
free(copy);
return (env);
}
free(copy), copy = NULL;
}
return (NULL);
}


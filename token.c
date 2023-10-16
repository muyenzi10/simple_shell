#include "shell.h"
/**
 * tokenized - this function to parsing
 * @line: this is line of typing
 * Return: parsing
*/
char **tokenized(char *line)
{
char *copy = NULL, *tok = NULL;
char **com = NULL;
int i = 0, length = 0;
if (!line)
return (NULL);
copy = _strdup(line);
tok = strtok(copy, DELIM);
if (tok == NULL)
{
free(line), line = NULL;
free(copy), copy = NULL;
return (NULL);
}
while (tok)
{
length++;
tok = strtok(NULL, DELIM);
}
free(copy), copy = NULL;
com = malloc(sizeof(char *) * (length + 1));
if (!com)
{
free(line), line = NULL;
return (NULL);
}
tok = strtok(line, DELIM);
while (tok)
{
com[i] = _strdup(tok);
tok = strtok(NULL, DELIM);
i++;
}
free(line), line = NULL;
com[i] = NULL;
return (com);
}


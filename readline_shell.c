#include "shell.h"
/**
 * read_line - this is function to read line
 * Return: prompt
*/
char *read_line(void)
{
char *line = NULL;
size_t size;
ssize_t ptr;
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);
ptr = getline(&line, &size, stdin);
if (ptr == -1)
{
free(line);
return (NULL);
}
return (line);
}


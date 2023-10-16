#include "shell.h"
/**
 * main - this function main library
 * @ac: this is for numbers
 * @argv: this for argument vector
 * Return: values
*/
int main(int ac, char **argv)
{
char *line = NULL;
int status = 0, index = 0;
char **command = NULL;
(void)ac;
while (1)
{
line = read_line();
if (line == NULL)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (status);
printf("%s\n", line);
free(line);
}
index++;
command = tokenized(line);
if (!command)
continue;
if (buildinexitenv(command[0]))
handle_envexit(command, &status, index, argv);
else
status = _execute(command, argv);
}
}


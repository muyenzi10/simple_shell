#include "shell.h"
/**
 * _execute - this function to execute some command
 * @command: this is command entering
 * @argv: argrumnet vector
 * Return: values
*/
int _execute(char **command, char *argv[])
{
int status;
pid_t child;
child = fork();
if (child == 0)
{
if (execve(command[0], command, environ) == -1)
perror(argv[0]);
exit(127);
freear(command);
}
else
{
waitpid(child, &status, 0);
freear(command);
}
return (WEXITSTATUS(status));
}


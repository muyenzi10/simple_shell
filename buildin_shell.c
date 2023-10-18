#include "shell.h"
/**
 * buildinexitenv - this function for build
 * @command: this is command passing
 * Return: values
*/
int buildinexitenv(char *command)
{
char *build[] = {"exit", "env", NULL};
int i;
for (i = 0; build[i]; i++)
{
if (_strcmp(command, build[i]) == 0)
return (1);
}
return (0);
}
/**
 * handle_envexit - handle env and exit
 * @command: this command in
 * @status: status
 * @index: index
 * @argv: argumnet vector
 * Return: values
*/
void handle_envexit(char **command, int *status, int index, char **argv)
{
if (_strcmp(command[0], "exit") == 0)
exit_shell(command, status, index, argv);
else if (_strcmp(command[0], "env") == 0)
print_env(command, status);
}
/**
 * exit_shell - this exit shell
 * @command: this command in
 * @status: status
 * @index: index
 * @argv: argumnet vector
 * Return: values
*/
void exit_shell(char **command, int *status, int index, char **argv)
{
int exit_v = (*status);
char *inx;
char sms[] = ": exit: Illegal number: ";
if (command[1])
{
if (positive(command[1]))
{
exit_v = _atoi(command[1]);
}
else
{
inx = _itoa(index);
write(STDERR_FILENO, argv[0], _strlen(argv[0]));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, inx, _strlen(inx));
write(STDERR_FILENO, sms, _strlen(sms));
write(STDERR_FILENO, command[1], _strlen(command[1]));
write(STDERR_FILENO, "\n", 1);
free(inx);
freear(command);
exit(2);
return;
}
}
freear(command);
exit(exit_v);
}
/**
 * print_env - this to print enviroment
 * @command: this is command in
 * @status: this is status
 * Return: values
*/
void  print_env(char **command, int *status)
{
int i;
for (i = 0; environ[i]; i++)
{
write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
write(STDOUT_FILENO, "\n", 1);
}
freear(command);
(*status) = 0;
}


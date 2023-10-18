#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
/** this is delimiter */
#define DELIM " \t\n"
/** this is enviroment extrnal */
extern char **environ;
/** functions */
char *read_line(void);
char **tokenized(char *line);
int _execute(char **command, char *argv[]);
/** about string.c */
int _strcmp(char *name1, char *name2);
char *_strdup(const char *str);
int _strlen(char *j);
/** builidin*/
void handle_envexit(char **command, int *status, int index, char **argv);
void  exit_shell(char **command, int *status, int indx, char **argv);
void  print_env(char **command, int *status);
int buildinexitenv(char *command);
/**tools1.c*/
int _atoi(char *p);
int positive(char *p);
/**tools*/
void reverse_str(char *p, int leng);
void freear(char **ary);
char *_itoa(int n);
void error(int index);

#endif


#include "shell.h"
/**
 * _strdup - this function to duplicate
 * @str: this char of pointer
 * Return: functions
*/
char *_strdup(const char *str)
{
char *ptr;
int i, len = 0;
if (str == NULL)
return (NULL);
while (*str != '\0')
{
len++;
str++;
}
str = str - len;
ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i <= len; i++)
ptr[i] = str[i];
return (ptr);
}
/**
 * _strcmp - this fuction for comparing
 * @name1: first chrs
 * @name2: this second chars
 * Return: value
*/
int _strcmp(char *name1, char *name2)
{
int compare;
compare = (int)*name1 - (int)*name2;
while (*name1)
{
if (*name1 != *name2)
break;
name1++;
name2++;
compare = (int)*name1 - (int)*name2;
}
return (compare);
}
/**
 * _strlen - this is function calculate length
 * @j: this value of index
 * Return: size of length
*/
int _strlen(char *j)
{
int length = 0;
while (j[length])
length++;
return (length);
}


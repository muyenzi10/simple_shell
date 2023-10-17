#include "shell.h"
/**
 * positive - this is function of positive number
 * @p: this is pointer
 * Return: values
*/
int positive(char *p)
{
int i;
if (!p)
return (0);
for (i = 0; p[i]; i++)
{
if (p[i] < '0' || p[i] > '9')
return (0);
}
return (1);
}
/**
 * _atoi - this to convert
 * @p: this pointer
 * Return: values
*/
int _atoi(char *p)
{
int i, nbr = 0;
for (i = 0; p[i]; i++)
{
nbr *= 10;
nbr += (p[i] - '0');
}
return (nbr);
}


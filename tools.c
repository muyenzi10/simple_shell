#include "shell.h"
/**
 * freear - this free memory
 * @ary: this is variable of array
 * Return: values
*/
void freear(char **ary)
{
int i;
if (!ary)
return;
for (i = 0; ary[i]; i++)
{
free(ary[i]);
ary[i] = NULL;
}
free(ary), ary = NULL;
}
/**
 * _itoa - this is function to covert
 * @n: is interger
 * Return: values
*/
char *_itoa(int n)
{
char bf[30];
int i = 0;
if (n == 0)
bf[i++] = '0';
else
{
while (n > 0)
{
bf[i++] = (n % 10) + '0';
n /= 10;
}
}
bf[i] = '\0';
reverse_str(bf, i);
return (_strdup(bf));
}
/**
 * reverse_str - this reverse
 * @p: pointer
 * @leng: length
 * Return: value
*/
void reverse_str(char *p, int leng)
{
char copy;
int star = 0;
int en = leng - 1;
while (star < en)
{
copy = p[star];
p[star] = p[en];
p[en] = copy;
star++;
en--;
}
}


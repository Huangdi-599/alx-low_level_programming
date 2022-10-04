#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *  in memory,which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
int i, j, len = 0;
char *duplicate;
if (str == NULL)
return (NULL);
for (i = 0; i <= *str; i++)
{
len++;
}
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
duplicate[j] = str[j];
}
duplicate[len] = '\0';
return (duplicate);
}

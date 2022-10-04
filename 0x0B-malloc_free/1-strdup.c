#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *  in memory,which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
int i, j;
char *duplicate;
if (str == NULL)
return (NULL);
for (i = 0; i <= *str; i++)
{
}
i += 1;
duplicate = malloc(sizeof(char) * i);
for (j = 0; j < i; j++)
duplicate[j] = str[j];
if (duplicate == NULL)
return (NULL);
return (duplicate);
}

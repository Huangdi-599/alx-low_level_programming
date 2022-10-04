#include <stdlib.h>
#include "main.h"
/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of an empty string , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, k, index = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
{
}
i += 1;
concat = malloc(sizeof(char) * i);
if (concat == NULL)
return (NULL);
for (j = 0; s1[j]; j++)
concat[index++] = s1[j];
for (k = 0; s2[k]; k++)
concat[index++] = s2[k];
return (concat);
}

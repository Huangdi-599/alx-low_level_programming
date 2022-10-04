#include <stdio.h>
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
int j, l1, l2, k, index = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (l1 = 0; l1 <= *s1; l1++)
{
}
for (l2 = 0; l2 <= *s2; l2++)
{
}
concat = malloc(sizeof(char) * (l1 + l2 + 1));
if (concat == NULL)
return (NULL);
for (j = 0; s1[j]; j++)
concat[index++] = s1[j];
for (k = 0; s2[k]; k++)
concat[index++] = s2[k];
return (concat);
}

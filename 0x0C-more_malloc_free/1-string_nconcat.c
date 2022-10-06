#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, loop1, loop2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
j += i;
concat = malloc(sizeof(char *) * (j + 1));
if (concat == NULL)
return (NULL);
for (loop1 = 0; loop1 < i; loop1++)
	concat[loop1] = s1[loop1];
for (loop2 = 0; loop2 < j && loop2 < n; loop2++)
{
concat[loop1] = s2[loop2];
loop1++;
}
loop1++;
concat[loop1] = '\0';
return (concat);
}

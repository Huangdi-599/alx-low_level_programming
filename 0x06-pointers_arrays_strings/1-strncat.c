#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return:  a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len1;
int len2;
int i;
for (len1 = 0; dest[len1] != '\0'; len1++)
{
};
for (len2 = 0; src[len2] != '\0'; len2++)
{
};
for (i = 0; i < n; i++)
{
dest[len1  + i] = src[i];
}
dest[len1  + i] = '\0';
return (dest);
}

#include "main.h"
#include <stdio.h>
/**
* print_buffer - Prints a buffer 10 bytes at a time, starting with
*                the byte position, then showing the hex content,
*                then displaying printable characters.
* @b: pointer to string
* @size: total number of bytes
* Return: nothing
*/
void print_buffer(char *b, int size)
{
int buf, num;
if (size <= 0)
{
printf("\n");
}
for (buf = 0; buf < size; buf +=10)
{
printf("%8.8x:", buf);
num = 0;
for (num = 0; num < 10; num++)
{
printf("%02x", b[buf + num]);
if ((num % 2 == 0 && num != 0) || (buf + num > size - 1))
{
printf(" ");
}
}
printf("\n");
}
}

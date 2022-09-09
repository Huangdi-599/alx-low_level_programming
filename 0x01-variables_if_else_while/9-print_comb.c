#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int j = '0';
while (j <= '9')
{
putchar(j);
if (j != '9')
{
putchar(',');
}
j++;
}
putchar('\n');
return (0);
}

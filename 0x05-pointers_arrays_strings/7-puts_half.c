#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 *
 * @str: string
 *
 */
void puts_half(char *str)
{
int i;
int j;
int half;
for (i = 0; str[i] != '\0'; i++)
{
};
if ((i % 2) == 0)
{
half = i / 2;
}
else
{
half = (i + 1) / 2;
}
for (j = half; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}

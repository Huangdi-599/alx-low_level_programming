#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
unsigned long int i = 1, j, digit;
if (n == 0)
_putchar('0');
while (i <= n)
i *= 2;
i >>= 1;
for (j = 0; n > 0; j++)
{
if (n > i)
{
_putchar('1');
n -= i;
i >>= 1;
}
else if (n == i)
{
_putchar('1');
digit = (i >> 1);
if (digit > 0)
{
for (i = digit; i > 0; i >>= 1)
_putchar('0');
}
break;
}
else
{
_putchar('0');
i >>= 1;
}
}
}

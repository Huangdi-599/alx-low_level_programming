#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10x the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int times = 0;
while (times < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
times++;
}
}

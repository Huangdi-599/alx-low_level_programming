#include <stdio.h>
1#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is postive number", n);
}
else if (n < 0)
{
printf("%d is negative number", n);
}
else
{
printf("%d is zero", n);
};
return (0);
}

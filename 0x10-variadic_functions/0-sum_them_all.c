#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
va_start(args, n);
unsigned int i, sum = 0;
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(args, const unsigned int);
}
va_end(args);
return (sum);
}

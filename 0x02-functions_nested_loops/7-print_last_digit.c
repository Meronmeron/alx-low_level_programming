#include "main.h"
/**
 * print_last_digit - prints last digit.
 *
 *@a: input to be tested.
 *
 * Return: last digit on success.
 */
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
b = b * -1;
_putchar(b + 48);

return (b);
}

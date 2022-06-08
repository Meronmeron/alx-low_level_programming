#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char a[9] = "_putcharx";
int i = 0;
while (a[i] != 'x')
{
_putchar(a[i]);
i++;
}
_putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - Lowercase Letters!.
(*
 * Return: 0 on success
 */
int main(void)
{
int x;
for (x = 0 ; x < 10 ; x++)
{
putchar(x + 48);
if (x == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

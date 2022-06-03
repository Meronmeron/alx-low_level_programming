#include <stdio.h>
/**
 *main - Prints combinations of decimal digits using only putchar
 *
 *Description: Prints combinations of decimal digits using only putchar
 *Return: 0
*/
int main()
{
int a;
int b;
int c;
int d;
for (a = 48; a <=57; a++)
{
for (b = 48; b <=57; b++)
{
for (c = 48; c <=57; c++)
{
for (d = 48; d <=57; d++)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if(!(a == 57 && b == 57 && c == 57 && d == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return 0;
}

#include <stdio.h>
/**
 * main - Lowercase Letters!.
(*
 * Return: 0 on success
 */
int main(void)
{
char x;
for (x = 'a' ; x <= 'z' ; x++)
{
if (x == 'q' || x == 'e')
continue;
putchar(x);
}
putchar('\n');
return (0);
}

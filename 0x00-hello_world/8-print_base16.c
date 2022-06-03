#include <stdio.h>
/**
 * main - Lowercase Letters!.
(*
 * Return: 0 on success
 */
int main(void)
{
char x;
for (x = 0 ; x < 10 ; x++)
putchar(x + 48);
for (x = 'a' ; x <= 'f' ; x++)
putchar(x);
putchar('\n');
return (0);
}

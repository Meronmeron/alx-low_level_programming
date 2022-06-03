#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Lowercase Letters!.
(*
 * Return: 0 on success
 */
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
a = n % 10;
if (a > 5)
{
printf("Last digit of %d is %d %s\n", n, a, "and is greater than 5");
}
else if (a == 0)
{
printf("Last digit of %d is %d %s\n", n, a, "and is 0");
}
else if (a < 6 && a != 0)
{
printf("Last digit of %d is %d %s\n", n, a, "and is less than 6 and not 0");
}
return (0);
}

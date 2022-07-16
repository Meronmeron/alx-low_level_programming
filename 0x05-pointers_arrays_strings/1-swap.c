#include "main.h"
/**
 * swap_int - swap the value of two integers using pointer.
 *@a: pointer
 *@b: pointer
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

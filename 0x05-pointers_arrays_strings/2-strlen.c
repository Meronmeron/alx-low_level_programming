#include "main.h"
/**
 * _strlen - retern the length of a string.
 *@s: pointer
 * Return: Nothing.
 */
int _strlen(char *s)
{
int a = 0;
while (*s != '\0')
{
a++;
s++;
}
return (a);
}

#include "main.h"
/**
 * _isalpha - cheks Alphabetic characters!.
 *
 *@c: character.
 *
 * Return: 0 on success
 */
int _isalpha(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
if (c <= 'Z' && c >= 'A')
{
return (1);
}
return (0);
}

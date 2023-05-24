#include "shell.h"
/**
 * _strlen - lenght  of string
 * @s: string
 * Return: 0 success
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

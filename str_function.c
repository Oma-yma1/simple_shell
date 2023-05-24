#include "shell.h"
/**
 * _strlen - lenght of a string
 * @str: string
 * Return: lenght
 */
int _strlen(char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
return (len);
}
/**
 * _strcmp - comparaison of string
 * @str1: first string
 * @str2: second string
 * Return: comaraison
 */
int _strcmp(char *str1, char *str2)
{
int i = 0;
while (str1[i] != '\0' && str2[i] != '\0')
{
if (str1[i] != str2[i])
{
return (str1[i] - str2[i]);
}
i++;
}
return (0);
}
/**
 * _strdup - returns pointer to a newly allocated memory
 * @str: a string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
char *a;
int i, j = 0;
if (str == NULL)
return (NULL);
while (str[j] != '\0')
j++;
a = (char *)malloc(sizeof(char) * (j + 1));
if (a == NULL)
return (NULL);
for (i = 0; i < j; i++)
a[i] = str[i];
return (a);
}
/**
 * _strcat - concatenation of strings
 * @dest: destination
 * @src: source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int j, k = 0;
while (dest[k] != '\0')
{
k++;
}
j = 0;
while (src[j] != '\0')
{
dest[k] = src[j];
k++;
j++;
}
dest[k] = '\0';
return (dest);
}

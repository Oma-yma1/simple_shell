#include "shell.h"
/**
 * _strcmp - compare two strings
 * @str1: first string
 * @str2: second string
 * Return: 1 if strings are similar
 */
int _strcmp(char *str1, char *str2)
{
unsigned int j = 0;
while (str1[j])
{
if (str1[j] != str2[j])
return (0);
j++;
}
return (1);
}
/**
 * _strlen - lenght of the string
 * @str: string
 * Return: lenght of string
 */
unsigned int _strlen(char *str)
{
unsigned int leen = 0;
while (str[leen])
leen++;
return (leen);
}
/**
 * _strdup - duplicate string
 * @str: string
 * Return: duplicat string
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
 * _strncmp - compare two string
 * @str1: first string
 * @str2: second string
 * @n: number of bytes
 * Return: 0 if s1 is s2
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
size_t j;
for (j = 0; str1[j] && str2[j] && j < n; j++)
{
if (str1[j] > str2[j])
return (str1[j] - str2[j]);
else if (str1[j] < str2[j])
return (str1[j] - str2[j]);
}
if (j == n)
return (0);
else
return (-15);
}


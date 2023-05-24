#include "shell.h"

/**
 * _getenv - getenv function
 * @name: character name
 * Return: return NULL
 * created by TAHA & OMAYMA
 */

char *_getenv(char *name)
{
	size_t nvmelen = _strlen(name);
	char **var;

	for (var = environ; *var != NULL; var++)
	{
		if (strncmp(name, *var, nvmelen) == 0 && (*var)[nvmelen] == '=')
		{
			return (&((*var)[nvmelen + 1]));
		}
	}
	return (NULL);
}

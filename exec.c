#include "shell.h"

/**
 * com_execve - com execve function
 * @args: arguments eleme
 * credit: Taha & Omayma
 */

void com_execve(char **args)
{
	char *d, *cmdpvth, *pth, *commvnd;
	int i;

	for (i = 0; args[i]; i++)
	{
		commvnd = args[i];

		if (access(commvnd, X_OK) == 0)
		{
			execve(commvnd, args, environ);
		}

		pth = _getenv("PATH");
		d = strtok(pth, ":");

		while (d != NULL)
		{
			cmdpvth = malloc(strlen(d) + strlen(commvnd) + 2);
			sprintf(cmdpvth, "%s/%s", d, commvnd);

			if (access(cmdpvth, X_OK) == 0)
			{
				execve(cmdpvth, args, NULL);
			}

			free(cmdpvth);
			d = strtok(NULL, ":");
		}
	}
	printf("%s: No such file or directory\n", hd[0]);
}

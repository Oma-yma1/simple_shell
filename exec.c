#include "shell.h"
/**
 * com_execve - com execve function
 * @args: arguments eleme
 * credit: Taha & Omayma
 */

void com_execve(char **args)
{
	char *d, *cmdpvth, *pth, *commvnd;
	char *error_msg;
	size_t len;
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
			cmdpvth = malloc(_strlen(d) + _strlen(commvnd) + 2);
			sprintf(cmdpvth, "%s/%s", d, commvnd);

			if (access(cmdpvth, X_OK) == 0)
			{
				execve(cmdpvth, args, environ);
			}

			free(cmdpvth);
			d = strtok(NULL, ":");
		}
	}
	error_msg = _strcat(hd[0], ": No such file or directory\n");
	len = strlen(error_msg);
	write(STDERR_FILENO, error_msg, len);
}

#include "shell.h"

/**
 * exct_commvnd - exct command function
 * @args: argumments type char
 * Credit: Taha & Omayma
 */

void exct_commvnd(char **args)
{
	pid_t iid = fork();

	if (iid == 0)
	{
		com_execve(args);
		exit(0);
	}
	else
	{
		waitpid(iid, NULL, 0);
	}
}

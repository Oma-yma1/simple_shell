#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void)
{
char *line = NULL;
size_t len = 0;
pid_t child_pid;
int status;

while (1)
{
printf("$ ");
if (getline(&line, &len, stdin) == -1)
{
putchar('\n');
exit(EXIT_SUCCESS);
}

line[strlen(line) - 1] = '\0';

child_pid = fork();
if (child_pid == -1)
{
perror("Error");
continue;
}
else if (child_pid == 0)
{
char **args = malloc(sizeof(char*) * 2);
args[0] = line;
args[1] = NULL;

if (execve(args[0], args, NULL) == -1)
{
perror("Error");
}

exit(EXIT_FAILURE);
}
else
{
waitpid(child_pid, &status, 0);
}
}

free(line);
exit(EXIT_SUCCESS);
}

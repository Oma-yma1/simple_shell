#ifndef SHELL_H
#define SELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

char** hd;
extern char **environ;
void irun_shell(void);
void exct_commvnd(char **args);
void com_execve(char **args);
char **thom_args(char *linee);
int thom_builtin(char **args);
void execute_builtinthom(char **args);
void thomfree_args(char **args);
void thom_prompt(void);
void pnt_iid(void);
void pnt_iiid(void);
void prt_fle_stt(char *file_name);
char *_getenv(const char *name);
char *get_line(void);
#endif

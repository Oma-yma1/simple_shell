#include "shell.h"
/**
 * prt_fle_stt - promt file state
 * @file_name: file name
 * Return: return file name
 * Credit Taha & Omayma
 */
void prt_fle_stt(char *file_name)
{
struct stat file_stat;
if (stat(file_name, &file_stat) == -1)
{
perror("stat");
return;
}
printf("file: %s\n", file_name);
}

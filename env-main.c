#include "shell.h"

/**
 * main - main function
 * @argc: nombre des arguments
 * @argv: argument element
 * Return: return 0
 * Credit Taha & Omayma
 */

char **hd;
int main(int argc __attribute__((unused)), char **argv)
{
	hd = argv;
	irun_shell();
	return (0);
}

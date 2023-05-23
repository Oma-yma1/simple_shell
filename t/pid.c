#include "shell.h"

/**
 * pnt_iid - print ID function
 * Credit Taha & Omayma
 */
void pnt_iid(void)
{
	printf("PID: %d\n", getpid());
}
/**
 * pnt_iiid - print Prent ID function
 * Credit Taha & Omayma
 */
void pnt_iiid(void)
{
	printf("PPID: %d\n", getppid());
}

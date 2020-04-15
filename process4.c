#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sched.h>
#include <stdlib.h>
#include <syslog.h>
#include "process.h"

int main()
{
    printf("This program calls to funtions made in task1&2&3\n");


 //Task 1 - invoke a deamon
        printf("\nStart two nestrd processes from firstTaskB\n");
	start_two_nested_processes();


 //Task 2 - invoke a deamon
        printf("\nbStart two memory shared precesses from  secondTaskB\n");
	start_two_mem_shared_processes();


	
 //Task 3 - invoke a deamon
	printf("\nCreate a deamon process from thirdTaskB\n");
	invokeDeamon();
    return 0;
}

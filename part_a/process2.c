#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sched.h>
#include <stdlib.h>

#define size 10000
char kidStack[size+1];

int livekid()
{
	printf("first process \n");
 	usleep(size);
}

int livekid1()
{
	printf("second process \n");
 	usleep(size);
}

int livekid2()
{
	printf("third process \n");
 	usleep(size);
}

int main ()
{
	int pid=0;
	while (pid==0)
	{
	int rs = clone(livekid2,kidStack+size,CLONE_PARENT,0);
	int rs2 = clone(livekid1,kidStack+size,CLONE_PARENT,0);
	livekid();
	}
	return 1;
}




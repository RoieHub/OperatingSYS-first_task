#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "process.h"
int idpidi ()
	{
	int idpeid=getpid();
	return idpeid;
	}

int start_two_nested_processes()
	{	
	//int pidid=fork();
	//printf("%d\n",pidid);
	if (fork()==0)
		{
		printf("im a kid\n");
		printf("%d\n",idpidi());
		}
	else
		{
		printf("im a dad\n");
		printf("%d\n",idpidi());
		}
	_exit;
	
	}





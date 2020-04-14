#include <stdio.h>
#include <stdbool.h>
#include <dlfcn.h>
#include <stddef.h>
#include "hello_Ariel.h"

void (*hallo_message)();

bool init_library(){
    void* hdl = dlopen("./libHelloAriel.so",RTLD_LAZY);
    if(hdl == NULL)
	{
	return false;
	}

    hallo_message =(void(*)())dlsym(hdl,"print_hello_Ariel");

    if(hallo_message== NULL)
	{	
	return false;
	}
    return true;
}

int main(){
    if(init_library())
    {
        hallo_message();
    }
    else
    {
        printf("Library was not loaded \n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
//Void pointer is a pointer which has no associated data type with it. 
//It can point to any data type and typecasted to any type.

//malloc and calloc function returns a void pointer.
// Due to this reason, they can allocate a memory for any type of data ,this is done at run time.
//Syntax of malloc
// void* malloc(size_t size);

int main(){
    int n=10;
    void *ptr=&n;
    printf("%d",*(int*)ptr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
//Wild pointer are also known as uninitialize pointers.
//These pointers usually point to some arbitary memory location and may cause a program to crash or misbehave
//Good practic: 
//1.Intilize them with the address of a known variable 
//2.Explicitly allocate the memory and put the values in the allocated memory.
int main(){
int *p;//This s wild pointers
*p=10;
//good
int var=100;
p=&var;
//or
int *ptr= (int *)malloc(sizeof(int));
*ptr=40;
free(ptr);

return 0;
}
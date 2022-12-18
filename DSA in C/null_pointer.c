#include<stdio.h>
#include <stdlib.h>
//A null pointer dosn't represent any memory location. 
//It represents an invalid memory location.
//When a null value is assigned to a pointer, then the pointer is considered as NULL pointer
//Null is itself a pointer
//1.It is used to intialize a pointer when that pointer is'nt assigned any valid memory address yet
//2.Used for handling errors when using malloc function
//Fact
//1. The value of NULL is 0. We can either use NULL or 0 but this 0 is written in context of pointer and is not equivalent to the Integer 0.
//2.Size of the NULL pointer depends upon the platform and is similar to the size of the normal pointers.
//It is good practice to perform NULL check before dereferencing any pointer to avoid surprises.
int main(){
//int *ptr1= NULL;// This a null pointer
//int *ptr2=0;//same as above

int *ptr;
ptr=(int*)malloc(2*sizeof(int));
if(ptr==NULL){
    printf("Memory could not be allocated");
}
else{
    printf("Memory allocated successfully");
}

 return 0;
} 
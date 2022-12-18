#include<stdio.h>
#include<stdlib.h>
//What is free?
//free() function is used to release the dynamically allocated memory in heap.
//Syntax: void free(ptr);
//The memory allocted in the heap will not be released automatically after using the memory.
//The space remains there and can't be used.
//It is the programmeer's reponsibility to release the memory after use.
int *input(){
     int i;
    int *ptr = (int *)malloc(5*sizeof(int));
    printf("Enter 5 number: ");
    for(i=0;i<5;i++){
        scanf("%d",ptr+i);
    }
    
    return ptr;
}
int main(){
   int i,sum=0;
   int *ptr= input();
   for(i=0;i<5;i++){
    sum+=*(ptr+i);
   }
   printf("Sum is: %d",sum);
   free(ptr);
   ptr=NULL;

    return 0;
}
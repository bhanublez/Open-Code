#include<stdio.h>
#include<stdlib.h>
//What is realloc?
//realloc() function used to change the size of the memory blocks without losing the old data
//Syntax: void *realloc(void *ptr,size_t newSize)
//*ptr-->Pointer to the previosly allocated memory
//On faliure, realloc retutns NULL
int main(){

// int *ptr= (int*)malloc(sizeof(int));
// ptr =(int *)realloc(ptr,2*sizeof(int));
//This will allocate memory space of 2*sizeof(int)
//Also, this function moves the contents of the old block to a new block and the data of the old block is not lost
//We may lose the data when the the new size is sammler than old size
//Newly allocated by bytes are uninitialized

//Example
int i;
 int *ptr= (int*)malloc(2*sizeof(int));
if(ptr==NULL){
    printf("Memory not available: " );
    exit(1);
}
printf("Enter the two numbers: \n");
for(int i=0;i<2;i++){
    scanf("%d",ptr+i);
}
ptr =(int *)realloc(ptr,4*sizeof(int));
if(ptr==NULL){
    printf("Memory not available: " );
    exit(1);
}
printf("Enter the two numbers: \n");
for(int i=2;i<4;i++){
    scanf("%d",ptr+i);
}
for(i=0;i<4;i++){
printf("%d ",*(ptr+ i));
}
    return 0;
}
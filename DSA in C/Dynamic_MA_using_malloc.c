#include<stdio.h>
#include<stdlib.h>
//What is malloc?
//malloc is a built in function declared in the header file<stdlib.h>
//malloc is the short name of "memory allocation" and is used dynamically
//allocate a singke large block of contigous memory according to the size specified
//Synatx (void *)malloc(size_t size)
//malloc function allocates a memory block according to the size specified in the heap
//and on  success it returns a pointer pointing to the first byte of the allocated memory 
//else returns NUll
//size_t is defined in <stdlib.h> as unsigned int
//Why void pointer?
//malloc dosn't have an idea of what it is pointing
//It merely allocates memory requestd by the user without knowing the type of data to be stored inside the memory
//The vod pointer can by typecasted to an appropriate type
//int *ptr=(int*)malloc(4);
//malloc allocates 4 bytes of memory in the heap and the address  of the first byte is stored in the pointer ptr


int main(){
int i,n;
printf("Enter the number of Integers: " );
scanf("%d",&n);
int *ptr= (int*)malloc(n*sizeof(int));
if(ptr==NULL){
    printf("Memory not available");
    exit(0);
}
for(i=0;i<n;i++){
    printf("Enter an Integer: ");
    scanf("%d",ptr+i);
}
for(i=0;i<n;i++){
    printf("%d ",*(ptr +i));
}

return 0;
}
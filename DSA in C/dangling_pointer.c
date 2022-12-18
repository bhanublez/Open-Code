#include<stdio.h>
#include<stdlib.h>
//A dangling pointer is a pointer which points to some non-existing memory location.
int* fun(){
    int num=10;
    return &num;
}
int main(){

//    int *ptr=(int *)malloc(sizeof(int));
//    //free(ptr);//But pointer is still pointing to the dellocated memory
//    //Solution is to reintialize
//    ptr=NULL;
int *ptr=NULL;
ptr= fun();
printf("d",*ptr);//Segmentation fault as the above pointer becomes dangling pointer as after executing fun function the local variabe vanishes

    return 0;
}
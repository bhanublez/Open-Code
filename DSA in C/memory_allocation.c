#include<stdio.h>
//Static Memory Location
//Memory allocation during compile time is called static memory.
//The memmory allocation is fixed and cannot be increased to decreased during run time
//Problem- in array the size is fixed cannot change during run time.
//Wastage of memory or crashing or misbheave of problem

//Dynamic memory allocation
//The process of allocation memory at the time of execution is called dynamic memory allocation.
//Heap is the segement of memory where dynamic memory alloctaion takes place
//Unlike stack where memory is allocated or dellocated in a define orede, 
//heap is an area of memormy where memory is allocted or delocatted without any order or randomly.
//There are certain built in function thar can help in alloction or dellocation some memory space at run time.
//pointer play an important role in Dynamic momory allocation
//Alloctaion memory can only be accessed through pointer
//Built in functions:
//1. malloc()
//2. calloc()
//3. realloc()
//4. free()
int main(){
    int arr[5]={1,2,3,4,5};//fixeed size cannot change this size durin run time
}
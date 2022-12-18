#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 1000
int top=-1;
int stack[N];
void push(){
    if(top==N-1){
        printf("Overflow State:can't add more element into the stack\n");
    }
    else{
        int x;
        printf("Enter element to be pusshed into the stack: ");
        scanf("%d",&x);
        top+=1;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("Underflow: Stack already empty, can'yremove any element\n");
    }
    else{
        int x=stack[top];printf("Popping %d out of the stack\n",x);
        top--;
        return x;
    }
    return -1;
}
int peek(){
    int x=stack[top];
    printf("%d  is the top most element of the stack\n",x);
    return x;
}

bool isEmpty(){
    if(top==-1){
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
        return false;  
}
bool isFull(){
    if(top==N-1){
        printf("Stack is full: Overflow State\n");
        return true;
    }
    printf("Stack is not full\n");
    return false;
}

int main(){
    printf("Satic array capacity is:%d",N);
    int choice;
    while (1)
    {
        printf("Choose any of the following operation:\n");
        printf("0.Exit    1.Push    2.Pop    3.Peek    4.check Empty     5. check full\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0: exit(0);
            
            break;
        case 1:push();
            
            break;
        case 2:pop();
            
            break;
        case 3:peek();
            
            break;
        case 4:isEmpty();
            
            break;
        case 5:isFull();
            
            break;

        
        default:printf("Please choose a correct option!");
           
        }
    }
    


    return 0;
}
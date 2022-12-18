#include<stdio.h>
#include<stdlib.h>
//Single linked lis: navigation is forward only
//Doubly linked list:Both forward and backward navigation is possible
//Circular linked List: Last element is Linked to the first element

//A single list made of nodes that consits of two parts
//1.Data(contains the actual data)
//2.Link(Contains the addreass of the next node of the list)

//Self Referential structure is a structure which contains a pointer to a structure of the same type
struct node{
int data;
struct node *link;
};
//Traversing a sinl=gle linked list means visiting each node of a single linked list until the end node is reached

void count_of_nodes(struct node *head){
    int count =0;
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr !=NULL){
        count++;
        ptr=ptr->link;
            }
            printf("%d\n",count);
}
void print_data(struct node *head){
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
       printf(" %d",ptr->data);
       ptr=ptr->link;
    }
    

}
int main(){
    struct node *head =NULL;
    head =(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=50;
    current->link=NULL;
    head->link=current;
    printf(" %d\n",head->data);
    printf(" %d\n",current->data);
    count_of_nodes(head);
    print_data(head);

    return 0;
}
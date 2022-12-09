//Linear data structure -> collection of nodes
//nodes hold data and address(pointer of node) both
//Dynamic D.S (grow or shrick at run time)-> no memory waste
//insertion and Deletion is easy no shift needed
//its work on data address
//Types os linked list 1. singly LL ,2. Doubly LL , 3. Circular LL, 4. Circular doubly linked list
#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
//Parameter constructor
Node(int data){
this-> data=data;
this->next=NULL;
}
};
void insertAthead(Node *&head,int d){
    // new node create
    Node* temp =new Node(d);
    temp->next=head;
    head=temp;
}
void insertAttail(Node* &tail,int d){
    //new node created
    Node* temp=new Node(d);
    

}
void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;

 }


int main(){
    //created a new node
Node* node1= new Node(10);
cout<<node1-> data<<endl;
cout<<node1->next<<endl;

Node* tail=node1;
//head pointed to node1
Node* head=node1;
insertAthead(head,12);

insertAthead(head,15);
print(head);


//Insertion at tail
insertAttail(tail,44);
insertAttail(tail,55);
print(tail);

return 0;
}

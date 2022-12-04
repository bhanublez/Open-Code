#include <iostream>
using namespace std;

class Node{
    public:
    int data; int rr;
    Node *next;
    
    Node(){
        cout<<"Hello"<<endl; 
    }
    Node(int data){
   this->data=data;
   this->next=NULL;
    }
};
void insertAthead(Node *&head,int d){
    Node *temp= new Node(d);
    temp->next=head;
    head=temp;

}
void insertAttail(Node *&tail,int d){
Node *temp= new Node(d);
         temp->next=tail;
    tail=temp;
}


void display(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;


}


int main(){
    
    Node *node1= new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // cout<<node1<<endl;
    cout<<&node1->next<<endl;

    Node *tail=node1;
    Node *head=node1;

    insertAthead(head,12);
    display(head);
    insertAttail(tail,44);
    insertAttail(tail,55);
    display(tail);
    



   
    


    return 0;
}
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

int main(){
Node* node1= new Node(10);
cout<<node1-> data<<endl;
cout<<node1->next<<endl;


}

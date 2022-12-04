#include<iostream>
using namespace std;

int main()
{

    int value=5;
    int *ptr=&value;
    cout<<*ptr<<endl;
    int **ptr2 =&ptr; //doubly pointer
    cout<<**ptr2<<endl;




    return 0;
}
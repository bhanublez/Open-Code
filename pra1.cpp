#include <iostream>
using namespace std;
int main(){
char another;
int num;
do{

    cout<<"Enter the number\n";
    cin>>num;
    cout<<"Square of "<<num<<" is "<<num*num<<endl;
    cout<<"Want to enter another number y/n \n";
    fflush(stdin);
    cin>>another;
}while(another=='y');





    return 0;
}

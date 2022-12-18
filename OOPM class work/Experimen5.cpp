#include<iostream>
using  namespace std;
class num2;
class num1{
private:
int n1;
public:
num1(){
    cout<<"Enter the first number"<<endl;
    cin>>n1;
}
friend void greater(num1,num2);
};

class num2{
private:
int n2;
public:
num2(){
    cout<<"Enter the first number"<<endl;
    cin>>n2;
}

friend num1;
friend void greater(num1,num2);
};
void greater(num1 N1,num2 N2){
    int a, b;
    a=N1.n1;
    b=N2.n2;
    if(a>b){
        cout<<"First number is greater "<<a<<endl;
    }
    else{
        cout<<"Second number is greater "<<b<<endl;
    }
}

int main(){
    num1 N1;
    num2 N2;
    greater(N1,N2);

    return 0;
} 

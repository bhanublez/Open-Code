#include<iostream>
using namespace std;
int main(){
float a,b;
char op;
cout.precision(2);
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
cout<<"Enter Operator "<<endl;
cin>>op;
switch(op)
{
case '+':
    cout<<"Sum of two number is "<<a+b<<endl;
    break;
case '-':
    cout<<"Sub of two number is "<<a-b<<endl;
    break;
case '*':
    cout<<"Multiplication of two number is "<<a*b<<endl;
    break;
case '/':
    cout<<"Division of two number is "<<a/b<<endl;
    break;
default:
    cout<<"Enter wrong operands"<<endl;

}
return 0;
}

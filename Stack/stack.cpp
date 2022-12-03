#include <iostream>
#include <stack>
using namespace std;
// last in fast out concept based stack
int main(){

stack<string> s; //syntax of stack
s.push("raj");
s.push("rahul");
s.push("Ravan");
cout<<"size of stack is "<<s.size()<<endl;// Give info about size of stack

    cout<<"Top element on stak is "<<s.top()<<endl;

s.pop();

    cout<<"New top element in stack is "<<s.top();
  cout<<"stack is empty or not "<<s.empty()<<endl;






    return 0;
}
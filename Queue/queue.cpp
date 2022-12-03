#include <iostream>
using namespace std;
#include <queue>

// It is base on fast in fast periority 
int main(){

queue<string> q;
q.push("Raj");
q.push("Ravi");
q.push("Kajal");
cout<<"Element on top in Queue "<<q.front()<<endl;
q.pop();
cout<<"New Element on top in Queue "<<q.front()<<endl;
cout<<"Size of queue of Queue after pop is: "<<q.size()<<endl;




q.pop();


    return 0;
}
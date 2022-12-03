#include <iostream>
#include <deque>
using namespace std;


int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // d.pop_back();
    // d.pop_front();
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

cout<<"Element at 0 value is: "<<d.at(0)<<endl;

cout<<"Deque is empty or not is: "<<d.empty()<<endl;
cout<<"Size of Deque is "<<d.size()<<endl;
//cout<<"Capacity of Deque is "<<d.capacity()<<endl;//capacity do'nt fork om deque this will guve compiler time error
d.push_front(45);
for (int j:d){
    cout<<j<<" ";
}cout<<endl;
d.erase(d.begin(),d.begin()+1);
for (int j:d){
    cout<<j<<" ";
}cout<<endl;
d.push_front(11);
d.push_front(22);
d.push_front(33);
d.push_front(44);
d.push_front(55);


    return 0;
}
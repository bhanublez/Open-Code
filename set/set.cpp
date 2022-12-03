#include <iostream>
#include <set>
using namespace std;


int main(){
    set<int> s1;
    s1.insert(4);
    s1.insert(50);
    s1.insert(44);
    s1.insert(46);
    s1.insert(46);
//set will sort the given element according to increasing order online and store element only ones 
   
    for(auto i : s1){
        cout<<i<<endl;
    }
    set<int>::iterator it;
    it=s1.begin();
    it++;
    s1.erase(it);
    cout<<"After earsing element"<<endl;
    for(auto i : s1){
        cout<<i<<endl;
    }
    cout<<"Couting number of "<<s1.count(46)<<endl; // if content gives one else 0 work same as content method
    
set<int>::iterator itr;
itr=s1.find(50);
cout<<"Iterator for given input 50 index in set is "<<*itr<<endl;
for(auto it=itr;it!=s1.end();it++){
    cout<<*it<<" ";
}cout<<endl;




    return 0;
} 
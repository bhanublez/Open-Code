#include <iostream>
using namespace std;
#include <list>

int main()
{
    list<int> l;
    l.push_back(1); // put element at back of list
    l.push_front(4); //put element in front of list
    //cout<<"First element "<<l.at(0)<<endl;//This giver errror
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Front elemtnt is: " <<l.front()<<endl; //show first element of list
   cout<<"Last element is: " <<l.back()<<endl;//show last element of array
  // l.clear();//claer all the element of list
   
     // l.erase(l.begin()); //erase begining element of list
       
   for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
int size=l.size();//gives size of the list
cout<<size<<endl;
       
//        list<int> ll(l);//coping of other list in new created list
//  for(int i:ll){
//         cout<<i<<" ";
//     }cout<<endl;

list<int> gg(4,1000);
for(int i:gg){
    cout<<i<<" ";
}cout<<endl;


    return 0;
}
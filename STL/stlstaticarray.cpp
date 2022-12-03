#include <iostream>
#include <array>
using namespace std;

int main(){

int base[]={1,2,3,4};
 array<int,4> a={1,2,3,4};
 for (int i = 0; i <a.size(); i++)
 {
    cout<<a[i]<<endl;
 }
 
cout<<"Element at second index "<<a.at(2)<<endl;
cout<<"Array is Emtpy or not "<<a.empty()<<endl;
cout<<"Array first and last element " <<a.front()<<" and "<<a.back()<<endl;

    return 0;
}
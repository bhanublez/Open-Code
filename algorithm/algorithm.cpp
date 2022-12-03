#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(78);
v.push_back(8);
v.push_back(45);
v.push_back(-4);
v.push_back(0);
cout<<"Searching for 4 "<<binary_search(v.begin(),v.end(),4)<<endl;//Searching for 4
cout<<"Searching for 8 in given vector "<<binary_search(v.begin(),v.end(),8)<<endl;
cout<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
string name ="Bhanu";
reverse(name.begin(),name.end());
cout<<name<<endl;
rotate(v.begin(),v.begin()+3,v.end());
for(auto i:v){
    cout<<" " <<i<<endl;
}
sort(v.begin(),v.end());

for( int i:v){
    cout<<" "<<i;
}cout<<endl;


    return 0;
}
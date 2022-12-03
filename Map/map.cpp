#include <iostream>
#include <map>
using namespace std;

int main(){
map<int,string> m;
m[4]="Ganga";
m[2]="Danka";
m[3]="Banka";
m.insert({1,"boss laka boss"});
for(auto i:m){
    cout<<" "<<i.first<<" "<<i.second;
}cout<<endl;
cout<<"Is 4 present or not check "<<m.count(4)<<endl;


m.erase(2);
cout<<"After erasing 13"<<endl;
for(auto i:m){
    cout<<" "<<i.first<<" "<<i.second;
}cout<<endl;

//auto it= m.find(4);

map<int,string>::iterator it;
it=m.find(4);//above statement and this both are same


//Error in below satement fix it and reason behind it find?
// for(auto i=it;i!=m.end();i++){
//     cout<<(i).first()<<endl;
// }cout<<endl;

    return 0;
}


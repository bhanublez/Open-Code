#include <iostream>
using namespace std;
int main(){

int x=14,t=5,b;
if(t>0){
cout<<"Enter the guess number"<<endl;
cin>>b;
(x&b)?cout<<("true"):cout<<("false");}
else{cout<<"Your Guess is over!"};
return 0;
}

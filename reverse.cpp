#include<iostream>
using namespace std;
int main(){
int p,n,r,revno=0;
cout<<"Enter the two digit Number n "<<endl;
cin>>n;
p=n;
while(n>0){
  r=n%10;
  revno=(revno*10 + r);
  n=n/10;
  }
cout<<"Reverse of number "<<p<<" is "<<revno<<endl;
        return 0;
}

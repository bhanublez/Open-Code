#include<iostream>
using namespace std;

int two_power(int n){
   if(n==0){
    return 1;
   }
   if(n<0){
    cout<<"Number is negative you should enter positive number"<<endl;
    return 0;
   }
   int ans=2*two_power(n-1);

   //alternative below
    // int temp=two_power(n-1);
    // int ans=2*temp;

return ans;
}

int main(){
    cout<<"Enter the power of 2"<<endl;
    int n; cin>>n;
   int ans= two_power(n);
   cout<<ans<<endl;

    return 0;
}
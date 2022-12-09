#include <iostream>
using namespace std;


int print(int n){
    if(n==0){
         cout<<" NEXT"<<endl;
        return 0;}
       
  //Decreasing order
  cout<<" "<<n;
    print(n-1);

   cout<<endl;
   //Increasing order
  cout<<" "<<n;
    
    
   
   
}

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
print(n);

    return 0;
}
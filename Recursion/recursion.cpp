#include <iostream>
using namespace std;

void Diplay(){
cout<<"Hello everyone";
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int temp=factorial(n-1);
    int ans=n*temp;

    return ans;
    
}

//When a function call itself then itself then its called recursion
//Recursion take place in stack
int main(){
    int n;
    cout<<"Enter any number whose factorial to find"<<endl;
    cin>>n;
    int ans= factorial(n);
    cout<<ans<<endl;

    return 0;
}
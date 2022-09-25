#include<iostream>
using namespace std;
int main(){
int n,f=1,i=1;
cout<<"Enter Number n "<<endl;
cin>>n;
do{
    f=f*i;

    i++;

}while(i<=n);

cout<<"Factorial of "<<n<<" is "<<f<<endl;
        return 0;
}

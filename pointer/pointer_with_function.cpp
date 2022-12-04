#include <iostream>
using namespace std;
void Display(int *p){

cout<<p<<endl;
cout<<*p<<endl;
}

void update(int *p){
// p=p+1;//only local update
// cout<<p<<endl;
// cout<<*p<<endl;
// *p++;//only local update take place
// cout<<p<<endl;
// cout<<*p<<endl;
*p=*p+1;//value gone update 

}
int getsum(int *arr,int n){
int sum=0;

for(int i=0;i<n;i++ ){
    sum+=i[arr];
}


return sum;

}



int main(){
// int value =5;
// int *p=&value;
// Display(p);
// cout<<endl;
// update(p);
// Display(p);
int arr[6]={1,2,3,4,5,16};
int sum=getsum(arr+3,2);
cout<<sum<<endl;
    
return 0;
}
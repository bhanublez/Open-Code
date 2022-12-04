#include <iostream>
using namespace std;

int main(){
// int arr[10]={1,11,111,1111,11111,16,6,6,4,4};
// cout<<"first location  of array address printing without using pointer"<<endl;
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl;

// //Extra addtion on above things
// cout<<"Entra thing on above thing"<<endl;
// cout<<"arr+1  is: "<<arr+1<<endl;
// cout<<"&arr+1 is: "<<&arr+1<<endl;
// cout<<"&arr[0]+1 is: "<<&arr[0]+1<<endl;
// cout<<"&arr[1] is: "<<&arr[1]<<"\n"<<endl;

// //Now appling pointer on above methods
// cout<<"Now appling pointer on above methods"<<endl;
// cout<<"*arr+1  is: "<<*arr+1<<endl;
// cout<<"*(arr+1) is: "<<*(arr+1)<<endl;
// cout<<"*(arr)+1 is: "<<*(arr)+1<<endl;

// //Other alternative method
// cout<<"Other alternative method"<<endl;
// int i=4;
// cout<<"Way 1 Check this out "<<i[arr]<<endl;
// //i[arr]=*(arr +i);//Both are equal
// cout<<"Way 2 Check this out "<<*(arr+i)<<endl;
// cout<<"Way 3 Check this out "<<arr[i]<<endl;


// cout<<endl;
// cout<<endl;

// cout<<"Now using pointer variable "<<endl;
// int *ptr=arr;//&arr[0] and &arr can be used at place of arr
// cout<<" *ptr=arr is: " <<ptr<<endl;
// cout<<" random value of *ptr=arr is: " <<*ptr<<endl;
// cout<<"Adress of pointer used is : "<<&ptr<<endl;
// cout<<"Size of array arr is:"<<sizeof(arr)<<endl;
// cout<<"Size of array *arr is:"<<sizeof(*arr)<<endl;
// cout<<"Size of array &arr is:"<<sizeof(&arr)<<endl;
// cout<<"Size of array ptr is:"<<sizeof(ptr)<<endl;

int ar[10];
//ar=ar+1;//This thing will show error
int *pi=&ar[0];
cout<<pi<<endl;
pi=pi+1;
cout<<pi<<endl;
cout<<"For integer array print address :"<<ar<<endl;
char ch[6]="abcd";
cout<<"For character array print value : "<<ch<<endl;
char *pk=&ch[0];
cout<<pk<<endl;
cout<<*pk<<endl;
    return 0;
}
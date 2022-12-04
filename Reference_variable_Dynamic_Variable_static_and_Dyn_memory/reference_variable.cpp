#include<iostream>
using namespace std;
//same memory but different - difernet names

//Below think written is wrong practice 
// int& update(int a){
//     int num=a;
//     int& ans=num;
//     return ans;
// }
void refernce(int &a){ //int& a also work
a++;
cout<<"Fuction is called and incread the value of a by 1 and now a is: "<<a<<endl;
a++;// again increae value of a
}
int get_sum(int *arr, int n){
int sum=00;
for(int i=0;i<n;i++){
sum+=arr[i];
}

return sum;
}

int main(){

int i=0;
int &j=i;// refernce varaible of i
i++;
cout<<"Value of i is: "<<i<<endl;
cout<<" Value of j is: "<<j<<endl;

refernce(i);
cout<<"After calling a new value of 'i' is now: "<<i<<endl;
//new memory is not created 
int r=12;
// int l=update(r);

//When we use stack memory the its is called static memeory allocation and when we use heap the its called Dyanmic memory location

// we use new keyword for invoking Dynamic memory
//Example->
char ch ='a';
cout<<"Size of character is: "<<sizeof(ch)<<endl;
char *ptr =&ch;
cout<<"Size of character is: "<<sizeof(ch)<<endl;

//Creating dynamic array use pointer

int *pttr= new int[5];
int n;
cout<<"Enter size of array"<<endl;
cin>>n;
int *arr= new int[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int ans=get_sum(arr,n);
cout<<"SUm of element of array is: "<<ans<<endl;

//never do below thing in prog
// while(true){
//     int *pp= new int[50];
// }




    return 0;
}
#include<iostream>
#include<math.h>
#include<limits.h>
//#include<csdlib>
#define ma 100
using namespace std;

int main()
{
    int n;
    int arr[ma];
    cout<<"Enter a number N:"<<endl;
    cin>>n; 

    for(int i=0;i<=n;i++){

        arr[i]=rand();
    }

int minNo = INT_MIN;
int maxNo = INT_MAX;

for(int i=0;i<=n;i++)
{
    maxNo= max(maxNo, arr[i]);
    minNo= min(minNo, arr[i]);
}
cout<< maxNo<< " "<<minNo<<endl;
    return 0;
}


















/*for(int i=0;i<=0;i++)
     {cout<<arr[i];
     }cout<<endl;
     //sorting an arrays
     for(int i=0;i<=n;i++)

     {
         a=arr[i];b=arr[j];
         if(b < a)

     {

         int temp= arr[i];
         arr[i]=arr[j]; arr[j]=temp;
     }
     }

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<",";

    }cout<<endl;*/

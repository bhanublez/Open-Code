#include<iostream>
#include<math.h>
#include<limits.h>
//#include<cstlib>
#define ma 100
using namespace std;

int main()
{
    int n,i;
    int arr[ma];
    cout<<"Enter a number N:"<<endl;
    cin>>n; //inputting values in arrays

    for(int i=0;i<=n;i++){

        arr[i]=rand(); // outputting unsorted arrays
    }
for( i=0;i<=0;i++)
     {cout<<arr[i];
     }cout<<endl;
     //sorting an arrays
     for(int j=i+1;i<=n;i++)

     {  if(arr[j] < arr[i])  {

         int temp= arr[i];
         arr[i]=arr[j]; arr[j]=temp;
     }
     }

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<",";

    }cout<<endl;

    return 0;
}







/*int minNo = INT_MIN;
int maxNo = INT_MAX;

for(int i=0;i<=n;i++)
{
    maxNo= max(maxNo, arr[i]);
    minNo= min(minNo, arr[i]);
}
cout<< maxNo<< " "<<minNo<<endl;*/


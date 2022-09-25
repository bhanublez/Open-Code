#include<iostream>
//#include<csdlib>
#define max 100
using namespace std;

int main()
{
    int n,a,b;
    int arr[max];
    cout<<"Enter a number N:"<<endl;
    cin>>n; //inputting values in arrays

    for(int i=0;i<=n;i++){

        arr[i]=rand(); // outputting unsorted arrays
    }
     for(int i=0;i<=0;i++)
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

    }cout<<endl;



    return 0;
}

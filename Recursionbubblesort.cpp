

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if(n==1)
        return;

    for (int i=0;i<n-1; i++)
    {
        if (arr[i]> arr[i+1])
        swap(arr[i],arr[i+1]);
        bubbleSort(arr,n-1);
    }
}

void Dis(int arr[],int n)//used to print the array
                {

                   for( int i=0;i<n;i++)
                    cout<<arr[i]<<endl;
                }

                int main()
                {
                    int n;//no of element in arrays to be allot
cout<<"Enter no of random element you wanted to allot to array";// asking for ...
cin>>n;
int arr[n];
for (int i=0;i<n;i++){

    arr[i]=rand();
}
cout<<"Random Array Form is:"<<endl;
Dis(arr,n);


     int r=sizeof(arr)/sizeof(arr[0]);
                    bubbleSort(arr,r);
                    cout<<endl;
cout<<"Sorted Array elements:"<<endl;
                    Dis(arr,n);
                    return 0;

                }


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

void printArray(int arr[],int n)//used to print the array
                {

                   for( int i=0;i<n;i++)
                    cout<<arr[i]<<endl;
                }

                int main()
                {
                    int arr[]= { 45,45,123,15,18,98,12,64};//stored arrays element
                    int n=sizeof(arr)/sizeof(arr[0]);
                    bubbleSort(arr,n);
                    printf("Sorted array: \n");
                    printArray(arr,n);
                    return 0;

                }

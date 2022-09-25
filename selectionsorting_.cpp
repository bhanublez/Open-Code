#include <bits/stdc++.h>
using namespace std;
void swap(int *xp,int *yp){
int temp = *xp;
*xp =*yp;
*yp=temp;}

void selectionSort(int arr[], int n)
{   int i,j,min_idx;
    if(n==1)
        return;
for ( i=0;i<n-1; i++)
    {        min_idx = i;//It first find minimum element in sorted array
        for( j= i+1;j<n;j++)
        if (arr[j]< arr[min_idx])
        min_idx = j;
   swap(&arr[min_idx],&arr[i]);    }
}
void Dis(int arr[],int n)//use to print the array
                {   for( int i=0;i<n;i++)               
                    cout<<arr[i]<<endl;
                }
int main() {   int n;//no of element in arrays to be allot
cout<<"Enter no of random element you wanted to allot to array. "<<endl;// asking for ...
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
 arr[i]=rand();
}
cout<<"Random Array Form is:"<<endl;
Dis(arr,n);
cout<<endl;
cout<<"Sorted Array elements:"<<endl;
 int r=sizeof(arr)/sizeof(arr[0]);
        selectionSort(arr,r);  Dis(arr,n);
                    return 0;

                }

#include<iostream>
#include<math.h>
#include<limits.h>
//#include<cstlib>




using namespace std;

void swap(int a[],int x,int y)
{ int temp = a[x];
  a[x]=a[y];
  a[y]=temp;}

  int locofSmallest(int a[],int s, int e){
  int i= s;  int j=i;
  while(i<=e)
  {
      if(a[i] < a[j]){
        j=i;
      }i=i+1;
  }
  }


 void display(int a[],int n)
 {
     int i=0; while(i<n)
     {
         cout<<a[i]<<",";
         i++;
     }cout<<endl;
 }

 void selSort(int a[],int n){
 int i=0,r; while(i<n-1)
{ int j= locofSmallest(a,i,n-1);
swap(a,i,j);
i++;
}
}

int main()
{
    int arr[]={10,45,156,1964,239,35,156,16,16};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    selSort(arr,size);

    display(arr,size);
    return 0;
}



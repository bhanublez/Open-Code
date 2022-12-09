#include<iostream>
#include<vector>
using namespace std;


void merge(int arr1[],int n,int arr2[],int m,int arr3[] ){
int i=0,j=0,k=0;
while(i!=(n-1)&&j!=(m-1)){
   if(arr1[i]<=arr2[j]){
    arr3[k++]=arr1[i++];  
   }
   else{
    arr3[k++]=arr2[j++];
   }
}
while(i!=n){
 arr3[k++]=arr1[i++];
}

while(j!=m){
    arr3[k]=arr2[j];
    k++;j++;
}


}


int main(){
    int arr1[5]={1,2,3,44,55};
    int arr2[3]={16,17,88};
    int arr3[8];
    merge(arr1,5,arr2,3,arr3);
    int p=sizeof(arr3);
    cout<<p<<endl;
    for (int i=0;i<8;i++){
        cout<<" "<<arr3[i];
    }cout<<endl;

    



    return 0;
}
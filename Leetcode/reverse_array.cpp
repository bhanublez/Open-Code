
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <vector>
//Reverse the array
int main() {
    cout<<"Enter size of array: ";
    int n; cin>>n; int arr[n];
    cout<<"Enter "<<n<<" element of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
     for(int i=0;i<n/2;i++){
   swap(arr[i],arr[n-i-1]);
        
    }
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }cout<<endl;
    return 0;
}

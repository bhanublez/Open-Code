
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
    cout<<"From which position array to be reverse "<<endl;
    int r; cin>>r;  int e=n-1;
    while(r<=e){
    
   swap(arr[r],arr[e]);
        e--;
        r++;
   
    }
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }cout<<endl;
    return 0;
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <vector>
//Sum of two array;
int main() {
    cout<<"Enter size of array First :";
    int n; cin>>n; int arr1[n];
    cout<<"Enter "<<n<<" element of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
     cout<<"Enter size of array Second :";
    int n2; cin>>n2; int arr2[n2];
    cout<<"Enter "<<n2<<" element of array: "<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int carry=0;
    int i,j;
    i=n-1;
    j=n2-1;
    vector<int> ans;
    while(i>=0&&j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        
        int sum=carry+val1+val2;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    
    //second case
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    
    //third case
    while(carry!=0){
    int sum=carry;
    carry=sum/10;
    sum=sum=sum%10;
    ans.push_back(sum);
    }
    cout<<"Sum of both array is:"<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<" "<<ans[i];
    }cout<<endl;
    
    return 0;
}
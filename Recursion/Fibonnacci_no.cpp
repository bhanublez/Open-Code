#include <iostream>
using namespace std;
int fab(int n){
if(n==0){
   
    return 0;
    }
    if(n==1){
   
    return 1;
    }
    
int ans=fab(n-1)+fab(n-2);

return ans;

}
int main(){
int n;
cout<<"Enter your fibonacci no postion"<<endl;
cin>>n;
int ans=fab(n);
cout<<ans;

    return 0;
}
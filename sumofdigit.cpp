#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--)
    {
     int num,m,sum=0;
     cin>>num;
     while(num>0)
     {
      m=num%10;
      sum+=m;
      num/=10;
     }
     cout<<sum<<"\n";
    }
    return 0;
}

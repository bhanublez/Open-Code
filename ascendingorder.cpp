#include <bits/stdc++.h>
using namespace std;
#define ll int long long
int solve(int );

int main()
{
        ll n;
        cout<<"How many digit you want to arrange in ascending order ? \n";
        cin>>n;
        ll arr[n];
        cout<<"Now Enter all that digits whom you want to arrange.\n";
      for(int i=0;i<n;i++)
      {
       cin>>arr[i];}

     sort(arr, arr+n);

     cout<<"Ascending order as follow: \n";
     for( int i=0;i<n ; i++)
     {cout<<arr[i]<<"\n";}
     return 0;
}

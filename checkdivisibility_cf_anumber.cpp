
#include <bits/stdc++.h>
using namespace std;

int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(0);
    int n,k,a;
    cout<<"Enter the number of digits who's divisibility you want check. \n";
    cin >> n;
    cout<<"Enter the the divisor. \n";
    cin>> k;
    int count=0;
    for (int i=0,j=0;i<=n-1;i++)
    {  j++;
        cout<<"Enter the "<<j<<" digits on which divisibility took place. \n";
        cin >> a;


        if (a%k==0)
        {
            count++;
        }
    }

    cout << "The no. of digit divisible by "<< k<<" in this digits is "<<count << endl;
    return 0;
}


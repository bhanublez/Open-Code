#include <iostream>
using namespace std;
#include <queue>

int main()
{
    //max_heap
    priority_queue<int> max;
    max.push(1);
    max.push(4);
    max.push(0);
    max.push(144);
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<" "<<max.top();
        max.pop();
    }cout<<endl;

//min_heap
priority_queue<int, vector<int>,greater<int>> min;
 min.push(1);
    min.push(-4);
    min.push(40);
    min.push(30);
    min.push(20);
    min.push(10);
    min.push(00);
int nn= min.size();
    for(int i=0;i<nn;i++){
        cout<<" "<<min.top();
        min.pop();
    }
    
} 

#include <iostream>
using namespace  std;
int distance(int dis,int step){
cout<<"Distance walked "<<step<<endl;
if(step==dis){
    return 1;
}


distance(dis,step+1);

}

int main(){
    int step,dis;
    cout<<"Enter total distance from home and your postion from destination"<<endl;
    cin>>dis>>step;
    distance(dis,step);
    cout<<"Reached distination"<<endl;


    return 0;
}

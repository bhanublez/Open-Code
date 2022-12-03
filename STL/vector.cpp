 #include <iostream>
#include <vector>
using namespace std;

//vector is Dynamic
int main(){
//     vector<int> v;
//     v.push_back(1);
//     cout<<"Size of array is: "<<v.size ()<<endl;
//     v.push_back(3);
//     cout<<"Capacity of array: "<<v.capacity ()<<endl; //capcity of error
//     v.push_back(4);
//     cout<<"Element at index 2 postion "<<v.at(2)<<endl;
//     for(int i:v){
//         cout<<i<<" "<<endl;
//     }
//    cout<<"Front elemtnt is: " <<v.front()<<endl; 
//    cout<<"Last element is: " <<v.back()<<endl;
//    v.pop_back();
//     for(int i:v){
//         cout<<i<<" "<<endl;
//     }
//     v.clear();
    vector<int> aa(5,1);//Every element in array is intialize to 1
    for(int i:aa){
        cout<<i<<" ";
    }cout<<endl;
vector<int> last(aa);
for(int i:last){
    cout<<i<<endl;
}
    







 

return 0;
}

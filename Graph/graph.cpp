#include <iostream>
using namespace std;
#include <unordered_map>
#include <list>
//Graph contain nodes and edges
//types connected,directed, undirected,weighted ,cyclic (also weigted)
//Based on Adjacency Matrix(order->o(n*n)) and Adjancey list

//Node-> entity to store data
// Edges-> used to connect nodes
//Degree-(in and outdegree)
class graph{
    
public:
 unordered_map<int,list<int>>adj;//map deleration

 void addEdge(int u,int v,bool direction){
    //direction=0->undirected
    //direction=1->directed graph
    
    //create an edge from u to v
    adj[u].push_back(v);
    if(direction==0){
        adj[v].push_back(u);
    }
 }

 void printAdjList(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j: i.second){
             cout<<j<<", ";

        }
        cout<<endl;
       
    }cout<<endl;

 }


};

int main(){
   cout<< "Enter number of nodes"<<endl;
int n;
cin>>n;
cout<<"Enter the number of edges"<<endl;
cin>>n;
graph g;
for(int i=0;i<n;i++){
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
}

    return 0;
}
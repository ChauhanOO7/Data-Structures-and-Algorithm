#include<bits/stdc++.h>
using namespace std;

void toposort(map<int,vector<int>> graph,vector<int> &store,map<int,int> &indegree){

    queue<int> topo;
    
    for(auto i:indegree){

        if(i.second == 0)   topo.push(i.first);
    }

    while(!topo.empty()){

        int front=topo.front();
        topo.pop();
        store.push_back(front);

        for(auto i:graph[front]){

            indegree[i]-=1;
            if(indegree[i] == 0)    topo.push(i);
        }
    }
}

int main(){

    // toposort only applicable in directed acyclic graph.
    // it is also called kahn 's algorithm.

    //sometime using map create more time complexity so its better to use vector(like you can use indegree vector instead of map).

    int edges;
    cout<<"No of edges :";
    cin>>edges;
    map<int,vector<int>> graph;
    map<int,int> indegree;

    for(int i=0;i<V;i++){
            
            indegree[i]=0;
    }
    
    for(int i=0;i<edges;i++){

        int node1,node2;
        cin>> node1 >> node2;
        graph[node1].push_back(node2);
        indegree[node2]++;
    }

    cout<<"output";
    for(auto i:graph){
        cout<<i.first<<":";
        for(auto j:i.second){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"toposort : ";
    vector<int> store;

    toposort(graph,store,indegree);
    
    for(int i=0;i<result.size();i++){

        cout<<result[i];
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void toposort(map<int,vector<int>> graph,map<int,bool> &vis,stack<int> &store,int src){

    vis[src]=true;

    for(auto i:graph[src]){

        if(!vis[i]){
            toposort(graph,vis,store,i);
        }
    }

    store.push(src);
}

int main(){

    // toposort only applicable in directed acyclic graph.

    int edges;
    cout<<"No of edges :";
    cin>>edges;
    map<int,vector<int>> graph;
    map<int,bool> vis;
    for(int i=0;i<edges;i++){

        int node1,node2;
        cin>> node1 >> node2;
        graph[node1].push_back(node2);
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
    stack<int> store;

    for(auto i:graph){

        if(!vis[i.first]){

            toposort(graph,vis,store,i.first);
        }
    }
    
    while(!store.empty()){
        cout<<store.top();
        store.pop();
    }

    return 0;
}
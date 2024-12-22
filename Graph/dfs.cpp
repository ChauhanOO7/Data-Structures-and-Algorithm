#include<bits/stdc++.h>
using namespace std;


void dfs(map<int,vector<int>> &graph,int src,map<int,bool> &check){

    cout<<src<<" ";
    check[src]=true;

    for(auto i:graph[src]){

        if(!check[i]){
            
            dfs(graph,i,check);
        }

    }
}

int main(){

    int edges;
    cout<<"No of edges :";
    cin>>edges;
    map<int,vector<int>> graph;
    for(int i=0;i<edges;i++){

        int node1,node2;
        cin>> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);

    }
    cout<<"output";
    for(auto i:graph){
        cout<<i.first<<":";
        for(auto j:i.second){
            cout<<j;
        }
        cout<<endl;
    }


    cout<<"DFS : ";
    int src;
    map<int,bool> check;
    cout<<"enter the source : ";
    cin>>src;
    dfs(graph,src,check);

    return 0;
}
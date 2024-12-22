#include<bits/stdc++.h>
using namespace std;


void bfs(map<int,vector<int>> &graph,int src,map<int,bool> &check){

    queue<int> store;
    store.push(src);
    check[src]=true;

    while(!store.empty()){

        cout<<store.front()<<" ";
        for(auto i: graph[store.front()]){

            if(!check[i]){
                store.push(i);
                check[i]=true;
            }
        }

        store.pop();
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


    cout<<"BFS : ";
    int src;
    map<int,bool> check;
    cout<<"enter the source : ";
    cin>>src;
    bfs(graph,src,check);

    return 0;
}
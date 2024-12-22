#include<bits/stdc++.h>
using namespace std;

//time complexity: O(NlogN + N*4*alpha);
class disjointset{

    vector<int> parent,size;

    disjointset(int n){

        parent.resize(n+1,0);
        size.resize(n+1,1);

        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }

    int findparent(int node){

        if(parent[node] == node)    return node;

        return parent[node]=findparent(parent[node]);   //path compression
    }

    void unionbysize(int node1,int node2){

        int parent1=findparent(node1);
        int parent2=findparent(node2);

        if(parent1 == parent2)  return;
        if(size[parent1] > size(parent2)){

            parent[parent2]=parent1;
            size[parent1]+=size[parent2];s
        }
        else{

            parent[parent1]=parent2;
            size[parent2]+=size[parent1];
        }
    }

}
int main(){

    vector<vector<int>> graph;
    vector<pair<int,int>> mst;
    int sum=0;
    int n;
    cin>>n;
    disjointset graphinfo=new disjointset(n);

    for(int i=0;i<n;i++){

        vector<int> temp;
        int node1,node2,weight;
        cin>>node1>>node2>>weight;

        temp.push_back(node1);
        temp.push_back(node2);
        temp.push_back(weight);

        graph.push_back(temp);
        temp.clear();
    }

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> store;

    for(int i=0;i<n;i++){

        int node1=graph[i][0];
        int node2=graph[i][1];
        int weight=graph[i][2];

        store.push({weight,{node1,node2}});
    }

    while(!store.empty()){  //NlogN + N*4*alpha

        int node1=store.top().second.first;
        int node2=store.top().second.second;
        int weight=store.top().first;

        store.pop();

        if(graphinfo.findparent(node1) != graphinfo.findparent(node2)){

            mst.push_back({node1,node2});
            sum+=weight;
            graphinfo.unionbysize(node1,node2);
        }

    }

    cout<<sum;

    return 0;
}
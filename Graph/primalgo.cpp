// time complexity: ElogE + ElogE

int spanningTree(int V, vector<vector<int>> adj[])  //adj[i] consist of vectors of 2 elements.
 {
        int sum=0;
        vector<int> vis(V,0);
        vector<pair<int,int>> mst;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> store;
        store.push({0,{0,-1}});
        
        //E
        while(!store.empty()){
            //logE
            int node=store.top().second.first;
            int parent=store.top().second.second;
            int weight=store.top().first;
            store.pop();
            
            if(vis[node] == 1)     continue;
            vis[node]=1;
            sum+=weight;
            mst.push_back({parent,node});
            
            //ElogE
            for(auto i:adj[node]){
                
                int innernode=i[0];
                int weight=i[1];
                
                if(vis[innernode]!=1){
                    
                    store.push({weight,innernode,parent});
                }
            }
            
            
        }

        //you can also print mst using mst vector.
        
        return sum;
    }
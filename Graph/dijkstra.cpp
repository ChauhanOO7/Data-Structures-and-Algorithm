    void shortestpath(vector<vector<int>> adj[],int S,vector<int> &distance){
        
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> store;
        store.push({0,S});
        
        while(!store.empty()){
            
            int node=store.top().second;
            int dist=store.top().first;
            store.pop();
            
            for(auto j:adj[node]){
                
                int ele=j[0];
                int dis=j[1];
                
                if(dist + dis < distance[ele]){
                    
                    distance[ele]=dist + dis;
                    store.push({distance[ele],ele});
                }
            }
            
        }
        
    }
    
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> distance;
        
        for(int i=0;i<V;i++){
            
            distance.push_back(INT_MAX);
        }
        
        
        distance[S]=0;
        
        shortestpath(adj,S,distance);
        
        return distance;

    }
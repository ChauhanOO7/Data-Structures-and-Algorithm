//below code work for connected graph and directed.
//for undirected you have to add one more edge only.
// for non connected graph add one more statement in if condition that distance[node1]!=1e8;

vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        
        vector<int> distance(V,1e8);
        
        distance[S]=0;
        
        for(int i=0;i<V-1;i++){
            
            for(auto edge:edges){
                
                int node1=edge[0];
                int node2=edge[1];
                int weight=edge[2];
                
                if(distance[node1] + weight < distance[node2]){
                    
                    distance[node2]=distance[node1] + weight;
                }
                
            }
        }
        
        // for finding negative cycle if present then return array of -1.
        for(auto edge:edges){
            
            int node1=edge[0];
            int node2=edge[1];
            int weight=edge[2];
            
            if(distance[node1] + weight < distance[node2]){
                return {-1};
                
            }
        }
    
        
        return distance;
    }
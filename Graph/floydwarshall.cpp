	void shortest_distance(vector<vector<int>>&matrix){
	    
	    int n=matrix.size();
	    
	    for(int k=0;k<n;k++){
	        
	        for(int i=0;i<n;i++){
	            
	            for(int j=0;j<n;j++){
	                
	                if(matrix[i][j] == -1){
	                    
	                    matrix[i][j]=1e9;
	                }
	                
	            }
	        }
	    }
	    
	    for(int k=0;k<n;k++){
	        
	        for(int i=0;i<n;i++){
	            
	            for(int j=0;j<n;j++){
	                    
	               int costpath=matrix[i][k] + matrix[k][j];
	               matrix[i][j]=min(matrix[i][j],costpath);
	                
	            }
	        }
	    }
	    
	    //for negative cycle.
	        
	   for(int i=0;i<n;i++){
	            
            if(matrix[i][i] < 0){
                
                cout<<"negative cycle.";
            }         
	   }
	   
	   	for(int k=0;k<n;k++){
	        
	        for(int i=0;i<n;i++){
	            
	            for(int j=0;j<n;j++){
	                    
                    if(matrix[i][j] == 1e9)     matrix[i][j]=-1;
	                
	            }
	        }
	    }
	    
	}
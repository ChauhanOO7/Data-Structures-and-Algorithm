class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int element = m*n;
        vector<vector<int>> newgrid(n,vector<int> (m));
        k=k%element;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                newgrid[((i * m + j + k) % element)/m][((i * m + j + k) % element)%m] = grid[i][j];
            }
        }
        return newgrid;
    }
};
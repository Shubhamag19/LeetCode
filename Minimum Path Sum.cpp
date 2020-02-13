class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size()-1;
        int n = grid[0].size()-1;
        vector<vector<int>> cost(m+1, vector<int>(n+1));
        int path = grid[0][0];
        cost[0][0] = grid[0][0];
        for(int i=1; i<grid.size(); i++){
            cost[i][0] = grid[i][0] + cost[i-1][0];
        }
        for(int j=1; j<grid[0].size(); j++){
            cost[0][j] = grid[0][j] + cost[0][j-1];
        }
        for(int i=1; i<grid.size(); i++){
            for(int j=1; j<grid[0].size(); j++){
                cost[i][j] = min(cost[i-1][j], cost[i][j-1]) + grid[i][j];
            }
        }
        return cost[m][n];
    }
};

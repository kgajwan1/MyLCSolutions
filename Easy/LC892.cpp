//LC 892 Surface area of 3d Shapes

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
    int total = 0;
    
    if (grid.size() != 0){
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] > 0){
                    total += grid[i][j]*4 + 2;

                    // check for left
                    if (j > 0)
                        total -= min(grid[i][j-1], grid[i][j])*2;
                    // check for bottom
                    if (i > 0)
                        total -= min(grid[i-1][j], grid[i][j])*2;
                }
            }
        }
    }
    return total;
}
}; 
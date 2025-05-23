// 463. Island Perimeter
// Complexity: O(m * n) time, O(1) storage
// Notes:
// Follow up: There are other shorter & cleaner solutions

class Solution {
    public:
        int islandPerimeter(vector<vector<int>>& grid) {
            int param = 0;
    
            // Loop through each cell in the grid
            for(int i=0; i<grid.size(); i++){
                for(int j=0; j<grid[i].size(); j++){
                    int top = i-1;
                    int down = i+1;
                    int left = j-1;
                    int right = j+1;
    
                    // Only process land cells
                    if(grid[i][j] == 1){
                        // Check top boundary or water above
                        if(top < 0){
                            param++;
                        }
                        else if(grid[top][j] == 0){
                            param++;
                        }
    
                        // Check bottom boundary or water below
                        if(down >= grid.size()){
                            param++;
                        }
                        else if(grid[down][j] == 0){
                            param++;
                        }
    
                        // Check left boundary or water to the left
                        if(left < 0){
                            param++;
                        }
                        else if(grid[i][left] == 0){
                            param++;
                        }
    
                        // Check right boundary or water to the right
                        if(right >= grid[i].size()){
                            param++;
                        }
                        else if(grid[i][right] == 0){
                            param++;
                        }
                    }
                }
            }
            return param;
        }
    };
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> answ(grid.size()-2,vector<int>(grid.size()-2));
        for(int i = 0; i < grid.size()-2; i++){ 
            for(int j = 0; j < grid.size()-2; j++){
                int best = grid[i][j];
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++)
                    best = best >= grid[i+k][j+l] ? best : grid[i+k][j+l];
                }
                answ[i][j] = best;
            }
        }
        return answ;
    }
};
//brute force, no need to overthink
//only need to iterate this filter over everything

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int ans = 0;

        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[0].size()-1;j++){
                int temp = grid[i][j]+grid[i-1][j]+grid[i-1][j-1]+grid[i-1][j+1]+grid[i+1][j]+grid[i+1][j-1]+grid[i+1][j+1];
                ans = max(ans,temp);
            }
        }
        return ans;
    }
};
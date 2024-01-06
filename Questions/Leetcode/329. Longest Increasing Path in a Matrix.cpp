//dp + dfs
//for each node we will see if it's children have a bigger value
//Also for each node we will store the value of longest increasing path from that point
//So to minimize dfs calls we will see if the child is valid, greater than current element and has been visited or not
// if such a child exists then LIS at current node will be value at child+1
// we will take the max of such values

class Solution {
public:
    bool isValid(int x,int y,vector<vector<bool>>&vis){
        if(x<0 || x>=vis.size() || y<0 || y>=vis[0].size()){
            return false;
        }
        return true;
    }

    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    void dfs(int x, int y, vector<vector<int>>&dp, vector<vector<int>>& matrix, vector<vector<bool>>&vis){
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(isValid(nx,ny,vis) && matrix[x][y]<matrix[nx][ny]){
                if(!vis[nx][ny]){
                    dfs(nx,ny,dp,matrix,vis);
                }
                dp[x][y]=max(dp[x][y],1+dp[nx][ny]);
            }
        }

    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        vector<vector<int>>dp(m,vector<int>(n,1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j]){
                    dfs(i,j,dp,matrix,vis);
                }
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,dp[i][j]);
            }
        }

        return ans;

    }
};
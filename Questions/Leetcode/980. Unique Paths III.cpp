//dfs on 2D
//we can do normal dfs
//that is start from source, avoid obstacles, reach the end
//but we don't need just one path
//we need the count of paths such that each cell is visited and only once
//so we just need to check that when we arrive at ending square, have we visited all the empty cells or not
//rest is similar to printing all paths in dfs


class Solution {
public:
    int ans=0;
    bool isValid(int x,int y,vector<vector<int>>& grid,vector<vector<bool>>& vis){
        int m = grid.size();
        int n = grid[0].size();
        if(x>=m || y>=n || x<0 || y<0){
            return false;
        }
        if(vis[x][y]){
            return false;
        }
        if(grid[x][y]==-1){
            return false;
        }
        return true;
    }
    int dx[4] = {0,0,-1,1};
    int dy[4] = {-1,1,0,0};

    void dfs(int x, int y,vector<vector<int>>& grid,vector<vector<bool>>& vis){
        vis[x][y]=true;
        if(grid[x][y]==2){
            bool temp = true;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]!=-1){
                        if(!vis[i][j]){
                            temp=false;
                            break;
                        }
                    }
                }
                if(temp==false){
                    break;
                }
            }
            if(temp){
                ans++;
                return;
            }
        }
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(isValid(nx,ny,grid,vis)){
                dfs(nx,ny,grid,vis);
                vis[nx][ny]=false;
            }
        }

    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid,vis);
                }
            }
        }
        return ans;

    }
};
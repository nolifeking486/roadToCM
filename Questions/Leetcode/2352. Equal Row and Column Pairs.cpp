// brute force
// first create a map storing all the rows as keys
// next just check if any column is present as key or not

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<string,int>a;
        for(int i=0;i<grid.size();i++){
            string key = "";
            for(int j=0;j<grid[0].size();j++){
                key = key+ " "+ to_string(grid[i][j]);
            }
            a[key]++;
        }

        int ans=0;
        for(int i=0;i<grid[0].size();i++){
            string key = "";
            for(int j=0;j<grid.size();j++){
                key = key+" "+ to_string(grid[j][i]);

            }
            auto it = a.find(key);
            if(it!=a.end()){
                ans+= (it->second);
            }
        }
        return ans;

    }
};
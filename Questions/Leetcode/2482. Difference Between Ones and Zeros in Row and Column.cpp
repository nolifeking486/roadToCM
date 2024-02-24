//brute force, implementation
//we only need to calculate the number of ones in each row and each column
//we can deduce the number of zeros from that info
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid[0].size();
        int m = grid.size();
        vector<int>row(m,0);
        vector<int>col(n,0);

        for(int i=0;i<m;i++){
            int sum= 0;
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
            }
            row[i]=sum;
        }

        for(int i=0;i<n;i++){
            int sum= 0;
            for(int j=0;j<m;j++){
                sum+=grid[j][i];
            }
            col[i]=sum;
        }

        vector<vector<int>>diff(m,vector<int>(n,0));

        for(int i=0;i<diff.size();i++){
            for(int j=0;j<diff[0].size();j++){
                diff[i][j]= row[i]+col[j] - (n-row[i] ) - (m-col[j]);
            }
        }
        return diff;


    }
};
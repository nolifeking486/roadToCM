//MATHS

//this is basically one of the algos from optimisation course
// afair this is transportation problem
// we just need to pick the minimum weight ,assign it to the cell
// then subtract it from both row and col to update the amount of weight which is left for allocation

// i implemented it in two ways, one using priority queues and second using nested loops
// both performed similar on runtime, but memory wise second is better

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        //optimisation algorithm

        //2 priority_queue  pair<sum,i>
        int m = rowSum.size();
        int n = colSum.size();
        vector<vector<int>> a(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j] = min(rowSum[i],colSum[j]);

                rowSum[i]-= a[i][j];
                colSum[j]-= a[i][j];
            }
        }

        return a;

    }
};
//only need to find vertices with indegree 0
//since these vertices are reachable only if we start traversing from them
//all paths from these will lead to other vertices with higher in degree

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {


        vector<int>in(n,0);

        for(auto child:edges){
            in[child[1]]++;
        }

        vector<int>ans;
        for(int i=0;i<n;i++){
            if(in[i]==0){
                ans.push_back(i);
            }
        }

        return ans;


    }
};
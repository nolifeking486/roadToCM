class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        //graph banao, atmost k children -> ans update
        //if greater than k children keep only k max
        //also no need for neg values
       
        
        vector<priority_queue<int>>a(vals.size());
        for(auto child:edges){
            int u = child[0];
            int v = child[1];
            a[u].push(vals[v]);
            a[v].push(vals[u]);
            
        }
        int ans = INT_MIN;
        for(int i=0;i<vals.size();i++){
            int temp = 0;
            int c = k;
            while(!a[i].empty() && c){
                
                if(a[i].top()<=0){
                    break;
                }
                temp+= a[i].top();
                a[i].pop();
                c--;
            }
            ans = max(ans,max(vals[i],temp+vals[i]));
        }
        return ans;

    }
};
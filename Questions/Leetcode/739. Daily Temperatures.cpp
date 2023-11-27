//stack
//algo : next greater
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        //next greater

        stack<int>q;
        vector<int>ans(t.size());
        for(int i=t.size()-1;i>=0;i--){
            while(!q.empty()){
                if(t[q.top()]<=t[i]){
                    q.pop();
                }
                else{
                    break;
                }
            }
            if(q.empty()){
                q.push(i);
                continue;
            }
            ans[i]=q.top()-i;
            q.push(i);

        }
        return ans;
    }
};
//brute force, implementation
//just mimic stack operation
//if the number if not in target then we need to push it as well as pop it
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int j = 0;
        vector<string> ans;
        for(int i=1;i<=n;i++){
            ans.push_back("Push");
            if(target[j]!=i){
                ans.push_back("Pop");
            }
            else{
                j++;
                if(j==target.size()){
                    break;
                }
            }
        }
        return ans;
    }
};
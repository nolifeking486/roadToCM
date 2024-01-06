//brute force
// just calculate sum of ones till 0 is encountered
// and store in vector
// return max of sum of two
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int>l;
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                l.push_back(temp);
                temp=0;
                continue;
            }
            temp+=nums[i];
        }
        l.push_back(temp);
        if(l.size()==1){
            return max(l[0]-1,0);
        }
        int ans=l[0];
        for(int i=1;i<l.size();i++){
            ans = max(ans,l[i]+l[i-1]);
        }
        return ans;

        
    }
};
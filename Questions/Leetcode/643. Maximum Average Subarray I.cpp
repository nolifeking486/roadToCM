//brute force, sliding window
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = -1e12;
        double sum = 0;
        for(int i=0;i<nums.size();i++){
            if(i<k){
                sum+=nums[i];
                continue;
            }
            ans = max(ans,sum/k);
            sum+=nums[i];
            sum-=nums[i-k];
        }
        ans = max(ans,sum/k);
        return ans;


        
    }
};
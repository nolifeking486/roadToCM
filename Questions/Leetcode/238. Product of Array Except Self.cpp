//since we can't do division, we
// can calculate prefix product and suffix product 
// for each element and product of those two will be ans

// Note: space optimisation possible by calculating 
// prefix and suffix directly in ans array 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]*prefix[i-1];
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i]*suffix[i+1];
        }
        vector<int>ans(n);
        ans[0]=suffix[1];
        ans[n-1]=prefix[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=prefix[i-1]*suffix[i+1];
        }
        return ans;
        
    }
};
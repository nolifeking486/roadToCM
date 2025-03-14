//brute force, implementation
//to minimize pair sum we need to pair big elements with small elements
//hence we can just sort the array and iterate to find the required ans

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int ans = 0;
        int n = nums.size();

        for(int i=0;i<(n/2);i++){
            ans = max(ans, nums[i]+nums[n-i-1]);
        }
        return ans;



    }
};
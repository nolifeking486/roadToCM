// Maths
// property of xor
// xor of x with x =0
// xor of x with 0 = x
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            ans = ans^nums[i];
        }
        return ans;

    }
};
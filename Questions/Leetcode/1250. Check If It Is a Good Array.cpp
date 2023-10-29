//brute force maths (question is based on a theorem)
//although I got the ans from seeing pattern on sample testcases
//If the numbers are not linearly independent then, multiplying them by integer and then taking sum
// would result in 0 as sum
// so we need linearly independent numbers or co primes
class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        
        if(nums.size()==1 && nums[0]!=1){
            return false;
        }
        int temp=nums[0];
        for(int i=1;i<nums.size();i++){
            temp= __gcd(temp,nums[i]);
        }
        return temp==1;
        
    }
};
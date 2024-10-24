//bit manipulation
//from m elements we can make 2^m combinations
//which we can represent using binary representation of each of the 2^m numbers
//knowing this we can just check if for the ith combination the jth bit is set or not
//if the bit is set, then that element if part of the subset

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = 1 << nums.size();
        vector<vector<int>>a;
        for(int i=0;i<n;i++){
            vector<int>temp;

            for(int j=0;j<nums.size();j++){
                if(i & (1<<j)){
                    temp.push_back(nums[j]);
                }

            }
            a.push_back(temp);
        }
        return a;

    }
};
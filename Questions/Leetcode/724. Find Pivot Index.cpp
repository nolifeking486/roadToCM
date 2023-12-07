//calculate prefix sum from left
//using that get right sum
// and compare
// I have kept padding to handle special cases
// Can be optimised by simply calculating the sum initially
// and while iterating from the left keep subtracting one
// element at a time and comparing if we got the ans
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>pre(nums.size()+2,0);
        pre[1]=nums[0];
        for(int i=2;i<=nums.size();i++){
            pre[i]=pre[i-1]+nums[i-1];
        }

        for(int i=1;i<pre.size()-1;i++){
           if(pre[i-1]==pre[pre.size()-2]-pre[i]){
             return i-1;
           }
        }
        //int ans = 0;
        //   1 2
        // 0 1 3 0
        return -1;
    }
};
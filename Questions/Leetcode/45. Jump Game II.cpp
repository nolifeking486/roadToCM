// not dp, only logic
// for any index i , nums[i] will represent the jump possible
// so we can reach till i+nums[i] from i
// on the way till i, we will encounter many j's with
// j+nums[j] > i+nums[i]
// this just means that from j we can not only reach i but even beyond
// but since we have already reached i that means we could have reached j in the same amount of jumps
// and since from j we are able to jump farther to some k>i
// we should consider jumping to j instead of i to minimise jumps
class Solution {
public:
    int jump(vector<int>& nums) {

        if(nums.size()==1)return 0;
        int curReach = nums[0];

        int jumps= 1;
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            if(curReach>=nums.size()-1){
                return jumps;
            }

            temp=max(temp,i+nums[i]);
            if(i==curReach){
                jumps++;
                curReach=temp;

            }
        }
        return jumps;



    }
};
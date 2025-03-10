//apparently its impossible to do it in
//O(N) time and O(1) space within these constraints
// hence kind of brute force solution below
// O(N) and O(N)
// copy positive and negative elements in separate arrays
// copy back in original array
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        for(auto child:nums){
            if(child>0){
                p.push_back(child);
            }
            else{
                n.push_back(child);
            }
        }
        int l=0,r=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=p[l];
                l++;
            }
            else{
                nums[i]=n[r];
                r++;
            }
        }
        return nums;

    }
};
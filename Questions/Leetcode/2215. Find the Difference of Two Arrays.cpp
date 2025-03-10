//brute force
// basic set
// just create 2 sets for getting distinct elements
// then find elements of one in second and vice versa
//return ans
class Solution {
public:
    vector<int> fun(set<int>&a, set<int>&b){
        vector<int>ans;
        for(auto child:a){
            auto it = b.find(child);
            if(it==b.end()){
                ans.push_back(child);
            }
        }
        return ans;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>a;
        set<int>b;
        for(auto child:nums1){
            a.insert(child);
        }
        for(auto child:nums2){
            b.insert(child);
        }
        vector<vector<int>>ans;
        ans.push_back(fun(a,b));
        ans.push_back(fun(b,a));
        return ans;


    }
};
//basic maths, property of xor
// any number xor with itself will give 0
// and any number xor with 0 will give the same number/itself
// xor the previous prefix with current prefix will result in number ^ 0

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans(pref.size(),0);
        ans[0]=pref[0];
        for(int i=1;i<pref.size();i++){
            ans[i]= pref[i-1]^pref[i];
        }
        return ans;


    }
};


// 0 0  0
// 0 1  1
// 1 0  1
// 1 1  0



// i  i-1  pref[i]
// 0    0       0
// 1   1      0
// 1    0       1
// 1    1       0
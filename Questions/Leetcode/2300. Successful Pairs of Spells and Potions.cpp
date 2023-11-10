//binary search
//using binary search we need to find
// the first potion using which
// the condition is satisfied because
// all the potions to the right will definitely satisfy the condition as well


class Solution {
public:
    bool isValid(long long spe, int mid, long long success){
        long long t = spe*mid;
        return t>=success;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans(spells.size(),0);
        for(int i=0;i<spells.size();i++){
            int l=-1, r=potions.size();
            while(l+1<r){
                int mid = (l+r)/2;
                if(isValid((long long)spells[i],potions[mid],success)){
                    r=mid;
                }
                else{
                    l=mid;
                }
            }
            if(r<potions.size()){
                ans[i]= potions.size()-r;
            }


        }
        return ans;
    }
};
//prefix sum
// given array itself can be used to store prefix sum

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
        }
        int ans = *max_element(gain.begin(),gain.end());
        return ans>=0 ? ans:0;
    }
};
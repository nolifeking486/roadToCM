// 2 pointer/sliding window
// Apparently this is MERGE INTERVAL ALGO
// for each part we need the rightmost and leftmost positions
// so we just store the rightmost positions of any character beforehand
// while iterating we keep updating the rightposition for current part so 
// that it reflects the rightmost position of any char in window





class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>rpos;
        for(int i=0;i<s.length();i++){
            rpos[s[i]]=i;
        }
        int l=0,r=0;
        vector<int>ans;
        while(l<s.length()){
            r=rpos[s[l]];
            int i=l;
            while(i<r){
                r = max(rpos[s[i]],r);
                i++;
            }
            ans.push_back(r-l+1);
            l=r+1;
        }
        return ans;
    }
};
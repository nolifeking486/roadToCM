//binary search, hash table, implementation
//since length is fixed to 3 implies XYX format or XXX
//so just store the positions of all the chars which will also give the freq
//count, while checking for freq >= 2 elements, we will look for any position 
//of middle element falling in between corner element
//for efficiency -> binary search




class Solution {
public:
    int countPalindromicSubsequence(string s) {


        vector<vector<int>>pos(26);

        for(int i=0;i<s.length();i++){
            
            pos[s[i]-'a'].push_back(i);
        }

        int ans = 0;

        for(int i=0;i<26;i++){
            int f = pos[i].size();
            if(f<2){
                continue;
            }
            if(f>2){
                ans++;
            }
            for(int j=0;j<26;j++){
                if(j==i){
                    continue;
                }
                if(pos[j].size()==0){
                    continue;
                }
                int l = pos[i][0];
                int r = pos[i][f-1];
                auto it = upper_bound(pos[j].begin(),pos[j].end(),l);
                if(it==pos[j].end()){
                    continue;
                }
                int t = distance(pos[j].begin(), it);
                if(pos[j][t]>r){
                    continue;
                }
                ans++;
            }
        }
        

        return ans;
    }
};
//brute force, implementation
//just calc the difference in counts
// ans will be sum of that divided by 2 since
// we are replacing the characters so one character's count will increase
// whereas other's will decrease by one
class Solution {
public:
    int minSteps(string s, string t) {
        int a[26];
        int b[26];

        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        for(auto child:s){
            a[child-'a']++;
        }
        for(auto child:t){
            b[child-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            ans+= abs(a[i]-b[i]);
        }
        return ans/2;


    }
};
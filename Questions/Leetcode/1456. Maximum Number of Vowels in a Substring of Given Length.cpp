// brute force, two pointers, sliding window
// keep count of vowels in current window
// and update answer if current count is greater than
// existing ans
class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int l = 0,r=0;
        int ans=0;
        int sum = 0;
        while(r<k){
            if(isVowel(s[r])){
                sum++;
            }
            r++;
        }
        while(r<s.length()){
            ans= max(ans,sum);
            if(isVowel(s[l])){
                sum--;
            }
            l++;
            if(isVowel(s[r])){
                sum++;
            }
            r++;

        }
        ans= max(ans,sum);
        return ans;


    }
};
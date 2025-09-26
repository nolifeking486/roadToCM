//2 pointer/sliding window, implementation
//keep checking for unique elements from right side
//non unique element is found update ans and left pointer
//do note that left pointer will be updated to the previous position+1 of the non unique element
//coz only then the remaining chars will be unique

//instead of map, vector can be used of fixed size for easier implementation


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2)return s.length();
        unordered_map<char, int> a;
        int i = 1, j = 0;
        int ans = 0;
        // 1 based indexing to counter map default for int
        while (i < s.length() && j < s.length()) {
            // int temp = 0;

            char key = s[j];
            int prev = a[key];
            if (prev == 0) {
                a[key] = j + 1;
                j++;               
                continue;
            }
            ans = max(ans, j - i+1);
            i = max(prev+1,i);
            a[key]=j+1;
            j++;
        }
        ans = max(ans,j-i+1);

        return ans;
    }
};
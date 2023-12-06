//just implemented an unoptimised approach in terms of memory
// optimal approach is to use 2 ptrs
// not really worth the effort
// logic is two simple
// swap vowels from front with their twins from back
class Solution {
public:
    bool isVowel(char t){
        string check = "aeiouAEIOU";
        for(char c:check){
            if(c==t){
                return true;
            }
        }
        return false;
    }
    string reverseVowels(string s) {
        string a = "";
        for(char c:s){
            if(isVowel(c)){
                a.push_back(c);
            }
        }
        //cout << a << endl;
        reverse(a.begin(),a.end());
        //cout << a << endl;
        int i=0;
        for(int j=0;j<s.length();j++){
            if(isVowel(s[j])){
                s[j]=a[i];
                i++;
            }
        }
        return s;

    }
};
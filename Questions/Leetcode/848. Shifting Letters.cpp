/*
implementation, logic, math
circular arrangement and also suffix sum
suffix sum is obvious because all operations apply to left side elements
new letter = current + shift
modulo 26 for circular arrangement

*/
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]= (shifts[i]%26+shifts[i+1]%26)%26;
        }

        for(int i=0;i<s.length();i++){
            // int t = (int)s[i] + shifts[i];
            // t = t%26;
            s[i]= 'a'+((s[i]-'a'+shifts[i])%26);
        }
        return s;
        
    }
};
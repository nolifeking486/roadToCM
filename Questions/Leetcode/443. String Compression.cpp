// brute force, sliding window
// create a new string to maintain ans
// copy into chars
class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        char temp=chars[0];
        int count =0;
        for(int i=0;i<chars.size();i++){
            if(temp!=chars[i]){
                s.push_back(temp);
                if(count>1){
                   s = s+ to_string(count);
                }
                count =0;
                temp=chars[i];
            }
            count++;
        }
        s.push_back(temp);
                if(count>1){
                   s = s+ to_string(count);
                }
        chars.clear();
        for(auto child : s){
            chars.push_back(child);
        }
        return s.length();


    }
};
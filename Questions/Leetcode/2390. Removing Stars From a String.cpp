//brute force
// use ans string as stack and
// if we encounter star
// we pop the top element of the stack
class Solution {
public:
    string removeStars(string s) {
        string ans="";
        //stack<char>t;

        for(auto child:s){
            if(child!='*'){
                ans.push_back(child);
                continue;
            }
            ans.pop_back();
        }

        return ans;
    }
};
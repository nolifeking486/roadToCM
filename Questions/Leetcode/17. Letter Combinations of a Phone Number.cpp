//recursive backtracking
//easier way to think of implementation is to just think of a way of performing
//dfs

class Solution {
public:
    vector<string>ans;
    string temp = "";

    void fun(int n,string digits,map<char,string>&a){
        if(n==digits.length()){
            ans.push_back(temp);
            return;
        }
        for(auto child:a[digits[n]]){
            temp.push_back(child);
            cout << temp << endl;
            fun(n+1,digits,a);
            temp.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        ans.clear();
        if(digits.length()==0)return ans;
        map<char,string>a;
        a['2']="abc";
        a['3']="def";
        a['4']="ghi";
        a['5']="jkl";
        a['6']="mno";
        a['7']="pqrs";
        a['8']="tuv";
        a['9']="wxyz";
        fun(0,digits,a);
        return ans;


    }
};
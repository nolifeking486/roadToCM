//whatever operation we perform any number of time 
// it will not change the number of unique elements
// it will also not change the frequencies of characters
// although the frequecies may get swapped multiple times

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){
            return false;
        }
        map<char,int>w1;
        map<char,int>w2;
        for(int i=0;i<word1.length();i++){
            w1[word1[i]]++;
            w2[word2[i]]++;
        }
        if(w1.size()!=w2.size()){
            return false;
        }
        auto it1 = w1.begin();
        auto it2 = w2.begin();
        vector<int>f1;
        vector<int>f2;

        while(it1!=w1.end() && it2!=w2.end()){
            int c1 = it1->first;
            int c2 = it2->first;
            if(c1!=c2){
                return false;
            }
            f1.push_back(it1->second);
            f2.push_back(it2->second);
            it1++;
            it2++;
        }

        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        for(int i=0;i<f1.size();i++){
            if(f1[i]!=f2[i]){
                return false;
            }
        }
        return true;

        
    }
};
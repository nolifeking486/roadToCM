//count sort
class Solution {
public:
    string sortVowels(string s) {
        int x[10];
        vector<char>c = {'A','E','I','O','U','a','e','i','o','u'};

        for(auto child:s){
            for(int i=0;i<10;i++){
                if(child==c[i]){
                    x[i]++;
                    break;
                }
            }
        }
        for(int i=0;i<s.length();i++){
            for(int j=0;j<10;j++){
                if(s[i]==c[j]){
                    for(int k=0;k<10;k++){
                        if(x[k]>0){
                            x[k]--;
                            s[i]=c[k];
                            break;
                        }
                    }
                    break;
                }
            }
        }
        return s;

    }
};
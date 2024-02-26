        // one D dp
        // calc prefix
        // calc suffix
        // sum will be ans

        // store number of moves required
        // separately keep the count of balls
        // when we move to the next box, we need to move all the balls from prev box
        // to current box one by one
        // also we need to consider the moves required to reach the previous box as well
        // so the ans will be the sum of moves till prev box and number of balls present at prev
        // box
class Solution {
public:
    vector<int> minOperations(string s) {

        int n = s.length();
        vector<int>pre(n,0);
        vector<int>suf(n,0);

        int c=0;
        if(s[0]=='1'){
            c++;
        }
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+c;
            if(s[i]=='1'){
                c++;
            }
        }
        c=0;
        if(s[n-1]=='1'){
            c++;
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+c;
            if(s[i]=='1'){
                c++;
            }
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=pre[i]+suf[i];
        }

        return ans;


    }
};
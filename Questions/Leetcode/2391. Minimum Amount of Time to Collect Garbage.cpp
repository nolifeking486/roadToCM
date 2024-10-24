//brute force, implementation
//So we need to collect all garbage units
//So that time we can't minimize and it is constant
//But we can minimize the time by sending each garbage truck to only till the last house
//With it's associated garbage type unit
//We can do this optimally by keeping prefix sum on travel times
//And we can store the count of all garbage units at each house in normal array

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int dp[n][3];
        memset(dp,0,sizeof(dp));
        //0 is G
        //1 is M
        //2 is P

        for(int i=0;i<n;i++){
            for(auto child:garbage[i]){
                if(child=='G'){
                    dp[i][0]++;
                }
                 if(child=='M'){
                    dp[i][1]++;
                }
                 if(child=='P'){
                    dp[i][2]++;
                }
            }
        }

        for(int i=1;i<travel.size();i++){
            travel[i]+=travel[i-1];
        }

        vector<int>a(3,0);

        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                if(dp[i][j]!=0){
                    ans+=dp[i][j];
                    if(i>0){
                        a[j]=travel[i-1];
                    }

                }
            }
        }
        for(auto child:a){
            ans+=child;
        }
        return ans;



    }
};
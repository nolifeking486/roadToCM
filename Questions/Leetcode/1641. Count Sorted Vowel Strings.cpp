
// Could not figure out the formula
// So used dp
//Need to visualize properly to figure out dp approach

//aaa
//aae
//aai
//aao
//aau
//
//aee
//aei
//aeo
//aeu
//
//aii
//aio
//aiu
//
//aoo
//aou
//
//auu   15
//
//
//
//
//eee
//eei
//eeo
//eeu
//
//eii
//eio
//eiu
//
//eoo
//eou
//
//euu		10
//
//
//
//iii
//iio
//iiu
//
//ioo
//iou
//
//iuu		6
//
//
//ooo
//oou
//
//ouu		3
//
//
//uuu		1

//so basically we need to fix one letter and then see what strings we are getting, for eg a_ , e_ etc
//we can observe that whenever we fix 'a' for n then with this 'a' we will get as many strings as the ans of n-1
//but for 'e' we will get strings which are a part of ans of n-1 which are not starting from 'a' since we need lexicographically sorted
//so for each ith till n we can store how many strings are starting with each vowel with given condition
//
//final ans for n will the sum of nth row elements
class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][5];

        memset(dp,0,sizeof(dp));

        for(int i=0;i<5;i++){
            dp[1][i]=1;
        }

        for(int i=2;i<=n;i++){
            for(int j=0;j<5;j++){
                for(int k=j;k<5;k++){
                    dp[i][j]+= dp[i-1][k];
                }
            }
        }

        int ans = 0;
        for(int i=0;i<5;i++){
            ans+= dp[n][i];
        }
        return ans;



    }
};
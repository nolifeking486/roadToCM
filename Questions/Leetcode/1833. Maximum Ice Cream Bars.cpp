/*

Greedy, implementation, sorting
At first glance it looks like DP but it is not required and not possible because of constraints 10^13
since we want to maximise the bars we will buy all the cheapest ones first
so Count Sort -> required by question statement otherwise the question will be trivialised
Now, at any time we just: 
    -check how many coins are remaining
    -if even 1 ice cream can be bought
    -then just do the required math                    

*/


class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int mx = *max_element(costs.begin(),costs.end());

        vector<int>f(mx+1,0);
        for(auto child:costs){
            f[child]++;
        }
        int ans = 0;
        for(int i=0;i<mx+1;i++){
            //cost of 1
            if(coins<i){
                break;
            }
            //particular cost is available for purchase
            if(f[i]>0){
                //available ice creams at i cost and the number of ice creams of i cost we can buy using our coins
                int t = min(coins/i,f[i]);
                coins -= t*i;
                ans+=t;

            }
        }
        return ans;
    }
};
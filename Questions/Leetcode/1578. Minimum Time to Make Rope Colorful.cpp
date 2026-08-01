
// For all the consecutive colors, we will keep only the maximum cost one and delete the rest.
// So, we just check if the current color is the same as the previous ones and if so then does it have the maximum cost.
// If the current color is different from previous ones, then we just update our current color, subtract the previous color's maximum cost from answer because we don't want that one to be deleted.
// Finally, we do the same operation outside the loop to handle the last color as well, because that will not be updated through loop.








class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        char curColor = colors[0];
        int notDelete = neededTime[0];

        int ans = 0;

        for(int i=0;i<colors.length();i++){
            ans+= neededTime[i];
            if(colors[i]==curColor){                
                notDelete = max(notDelete,neededTime[i]);
            }else{
                ans-= notDelete;
                curColor = colors[i];
                notDelete = neededTime[i];
            }
        }
        ans-=notDelete;
        return ans;
        
    }
};
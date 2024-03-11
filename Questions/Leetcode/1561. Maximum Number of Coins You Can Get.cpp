//brute force, implementation, maths
//instead on focusing on maximizing our coins we should focus on minimizing Bob's
// and maximizing Alice
// we can do this by sorting the piles and always giving leftmost to bob and rightmost to Alice
// Then we can just give the second largest to ourselves to maximise our coins

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());

        int start = 0;
        int end = piles.size()-1;
        int ans = 0;
        while(start<end){
            start++;
            end--;
            ans+=piles[end];
            end--;
        }
        return ans;

    }
};
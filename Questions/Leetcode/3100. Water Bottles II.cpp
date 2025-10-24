// brute force, implementation
// every time just drink the number of bottles that can be exchanged
// do the required math





class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = 0;
        while(numBottles>=numExchange){
            ans+=numExchange;
            numBottles-=numExchange;
            numBottles++;
            numExchange++;
        }
        return ans+numBottles;
    }
};
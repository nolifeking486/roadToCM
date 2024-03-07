//brute force, maths
//if we look carefully the answer will never exceed 9
//also answer will always be the max digit of n
//since that will be the largest amount of ones required
//as far as other smaller digits are concerned we can
// always turn them off once their sum has been reached
class Solution {
public:
    int minPartitions(string n) {
        char a = '0';

        for(auto child:n){
            if(child>a){
                a=child;
            }
        }
        return a-'0';
    }
};
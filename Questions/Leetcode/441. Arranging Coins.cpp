//binary search, implementation
//using the formula for sum of natural numbers we check
//for xth natural number for which summation would be less than equal to n


class Solution {
public:
    int arrangeCoins(int n) {
        long long int l=1,r=1e5, mid = (l+r)/2;
        for(int i=0;i<100;i++){
            mid = (l+r)/2;
            cout << l << " " <<r << endl;
            long long int t = mid*(mid+1)/2;
            if(t<n){
                l=mid;
            }else if(t==n){
                //return (int)t;
                break;
            }else{
                r=mid;
            }
        }
        return (int)mid;
    }
};
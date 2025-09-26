// Since we are dealing with signed integers we cannot directly use the NOT operator(~).
// Also we need to flip all the bits of the given number so we can't just do something like n^1 because it will only flip the LSB.

// So, we need to find the number which is of the same length as our given number having all the bits set. for example, 11, 111, 1111 and so on.
// Which is easy since these are just {[powers of 2] - 1}.

class Solution {
public:
    int bitwiseComplement(int x) {
        
        if(x==0)return 1;
        
        int i = 1;
        while(i<=x){
            i = i<<1;
        }

        i-=1;

        return i^x;
    }
};
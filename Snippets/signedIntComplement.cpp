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
//brute force, maths
// just compare bit by bit 
// can be optimised in terms of memory using bit manipulation
class Solution {
public:
    int minFlips(int a, int b, int c) {

        string x = bitset<64>(a).to_string();
        string y = bitset<64>(b).to_string();
        string z = bitset<64>(c).to_string();

        int ans=0;
        for(int i=0;i<z.length();i++){
            if(z[i]=='0'){
                if(x[i]!='0'){
                    ans++;
                }
                if(y[i]!='0'){
                    ans++;
                }
            }
            else{
                if(x[i]=='1' || y[i]=='1'){
                    continue;
                }
                ans++;
            }
        }
        return ans;
        
    }
};
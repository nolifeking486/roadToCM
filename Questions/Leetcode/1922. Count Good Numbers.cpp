//modular binary exponentiation, maths
//using basic P&C we can figure out the ans sequence
// 5*4*5..... n times
// the tricky part is implementation because we need to calculate a^b efficiently
// and prevent integer overflow
// hence binary exponentiation
class Solution {
public:
    long long binpow(long long a,long long p, long long mod){
        long long res=1;
        while(p>0){
            if(p&1){
                res=res*a%mod;
            }
            a = a*a%mod;
            p>>=1;
        }
        return res;
    }


    int countGoodNumbers(long long n) {
        long long p4=0,p5=0;
        long long mod = 1e9+7;
        if(n%2==0){
            p5= n/2;
            p4= n/2;
        }
        else{
            p5=(n+1)/2;
            p4=(n+1)/2-1;
        }
        cout << p5 << " " << p4 << endl;
        return binpow(5,p5,mod)*binpow(4,p4,mod)%mod;
    }
};
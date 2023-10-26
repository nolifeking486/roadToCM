#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define ll            long long
#define ld            long double
#define fastio()    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define show(x)        {for(auto i : x) cout << i << ' '; cout << endl;}
#define shop(n, x)    {for(int i = 0; i < n; i++) cout << x << '\t'; cout << endl;}
#define _ans(x)        cout << x << endl;
#define all(v)        v.begin(), v.end()
#define ff            first
#define ss            second
#define mk            make_pair
#define line        ;{cout << endl;}
#define pb            push_back
#define pf            push_front
#define printclock    cerr<<"\nTime : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\t";
//-------------------------------------------------------------------/
#define here(args...)    {string _is = #args; vector < string > _os;  \
_split(_is, _os);    error(_os.begin(), args);    line}
template < typename T > void error(T it){}
template < typename Ty, typename T, typename... Args > void error(Ty it, T a, Args... arg)
{ cout << *it << " = " << a << '\t';    error((++it), arg...); }
void _split(string s, vector < string > &_os){string se; ll x = 0; for(auto i : s)
{if(i == ',' && x == 0)_os.pb(se), se = ""; else se += i; if(i == '(')x++; if(i == ')')x--;}_os.pb(se);}
//-------------------------------------------------------------------|

int mod = 1e+9 + 7;    //    998244353
int inf = (2e+18);
ld pi = 3.1415926536;
const int N = 2e+5 + 3;
const int _N = 2e+6 + 3;
//-------------------------------------------------------------------|
// consider the case of 10 and 25
// 10! is product till 10 and only 10/2 numbers have 5 as a factor
// 25! has 25/5 numbers have 5 as a factor, but 5 is a factor twice 
// so effectively 25/5+5/5 = 6 numbers divisible by 5
// and we only need to find total powers of 5 in n factorial because 
// total powers of 2 will always be greater than total powers of 5 in any factorial


int32_t main()
{
    fastio()
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n;
        cin>> n;
        //int p2 = 0;
        n = n-(n%5);
        int p5 = 0;
        while(n%5==0 && n>0){
            p5+= n/5;
            n/=5;
            n-=(n%5);
        }
        cout << p5 << endl;

        
        
    }
    printclock
}
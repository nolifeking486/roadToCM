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
//Binary search with predicate function
// We implement normal bin srch and keep left and right according to 
// minimum-1 and maximum+1 distance possible in any case
// this is due to loop condition and strategy to calc mid;
// In predicate function we just check if it is possible to place all the cows 
// using are current calculated dist.
//------------------------------------------------------
int mod = 1e+9 + 7;    //    998244353
int inf = (2e+18);
ld pi = 3.1415926536;
const int N = 2e+5 + 3;
const int _N = 2e+6 + 3;
//-------------------------------------------------------------------|
bool isvalid(vector<int>&a, int c, int mid){
    int cowstoplace = c-1;
    int currdis = 0;
    for(int i=1;i<a.size();i++){
        if(cowstoplace==0){
            return true;
        }
        currdis += a[i]-a[i-1];
        if(currdis>=mid){
            cowstoplace--;
            currdis=0;
        }

    }
    return cowstoplace==0;
}
int32_t main()
{
    fastio()
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n,c;
        cin >> n >> c;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(all(a));
        int l = -1, r= 1e9+1, ans = 0;

        while(l+1<r){
            int mid = (l+r)/2;
            if(isvalid(a,c,mid)){
                l=mid;
                ans=max(ans,l);
            }
            else{
                r=mid;
            }
        }
        cout << ans << endl;
        
    }
    printclock
}
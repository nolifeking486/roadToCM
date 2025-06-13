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

// basic, implementation
// prefix sum, sorting

//-------------------------------------------------------------------|

int32_t main()
{
    fastio()
    int test = 1;
    //cin >> test;
    while(test--)
    {
        
        int n;
        cin >> n;

        vector<int>a(n);


        for(int i=0;i<n;i++){
            cin >> a[i];
        }

       // vector < int > b = a;

        vector<int>type1 = a;

        for(int i=1;i<n;i++){
            type1[i]+=type1[i-1];
        }

        sort(a.begin(),a.end());
        //show(a)

        for(int i=1;i<n;i++){
            a[i]+=a[i-1];
        }

        // show(type1)
        // show(a)


        int m;
        cin >> m;

        for(int i=0;i<m;i++){
            int x,l,r;
            cin >> x >> l >> r;
           // here(x,l,r)
            if(x==1){
                if(l==1){
                    cout << type1[r-1] << endl;
                    continue;
                }
                cout << type1[r-1]-type1[l-2] << endl;
            }
            else{

                if(l==1){
                    cout << a[r-1] << endl;
                    continue; 
                }
                cout << a[r-1]-a[l-2] << endl;
            }
        }

        // 24
        // 9
        // 28


        //show(type1);
        
    }
    printclock
}
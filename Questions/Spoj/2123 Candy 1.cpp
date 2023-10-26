#include <bits/stdc++.h>
using namespace std;
#define int 		long long
#define ll			long long
#define ld			long double
#define fastio()	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define show(x)		{for(auto i : x) cout << i << ' '; cout << endl;}
#define shop(n, x)	{for(int i = 0; i < n; i++) cout << x << '\t'; cout << endl;}
#define _ans(x)		cout << x << endl;
#define all(v)		v.begin(), v.end()
#define ff			first
#define ss			second
#define mk			make_pair
#define line		;{cout << endl;}
#define pb			push_back
#define pf			push_front
#define printclock	cerr<<"\nTime : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\t";
//-------------------------------------------------------------------/
#define here(args...)	{string _is = #args; vector < string > _os;  \
_split(_is, _os);	error(_os.begin(), args);	line}
template < typename T > void error(T it){}
template < typename Ty, typename T, typename... Args > void error(Ty it, T a, Args... arg)
{ cout << *it << " = " << a << '\t';	error((++it), arg...); }
void _split(string s, vector < string > &_os){string se; ll x = 0; for(auto i : s)
{if(i == ',' && x == 0)_os.pb(se), se = ""; else se += i; if(i == '(')x++; if(i == ')')x--;}_os.pb(se);}
//-------------------------------------------------------------------|

int mod = 1e+9 + 7;	//	998244353
int inf = (2e+18);
ld pi = 3.1415926536;
const int N = 2e+5 + 3;
const int _N = 2e+6 + 3;
//-------------------------------------------------------------------|

// brute force, maths
// total number of candies will remain constant 
// even after redistribution 
// need to count only for one side movement either positive to negative 
// or vice versa




//---------------------------------------------------------------------
int32_t main()
{
	fastio()
	while(1){
		int n;
		cin >> n;
		if(n==-1){
			break;
		}
		vector<int>a(n,0);
		
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int sum=0;
		for(auto child:a){
			sum+=child;
		}
		if(sum%n!=0){
			cout << -1 <<endl;
		}
		else{
			int x= sum/n;
			int ans=0;
			for(int i=0;i<n;i++){
				if(x-a[i]>=0){
					ans+=x-a[i];
				}
			}
			cout << ans << endl;
		}
	}
	printclock
}
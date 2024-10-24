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
const int N = 1e+5 + 3;
const int _N = 2e+6 + 3;
//-------------------------------------------------------------------|
//basic logic, maths, implementation
//there are two cases which are main
//if we start deleting from one direction to reach both min and max
//if we start deleting from both direction to reach both min and max
//we need the minimum number of moves from them



//-------------------------------------------------------------------|

int32_t main()
{
	fastio()
	int test = 1;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
		    cin >> a[i];
		}
		int x = max_element(all(a))-a.begin();
		int y = min_element(all(a))-a.begin();
		//here(x,y)

		int oned = min(max(x,y),max(n-x-1,n-y-1))+1;
		int twod = min(x+n-y,y+n-x)+1;

		cout << min(oned,twod) << endl;

	}
	printclock
}
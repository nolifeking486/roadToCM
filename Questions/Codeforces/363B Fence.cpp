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
//prefix sum, maths
//minimum sum over window

//-------------------------------------------------------------------|
int32_t main()
{
	fastio()
	int test = 1;
//	cin >> test;
	while(test--)
	{
		int n,k;
		cin >> n >> k;
		vector<int>a(n);
		for(int i=0;i<n;i++){
		    cin >> a[i];

		}
		for(int i=1;i<n;i++){
		    a[i]=a[i]+a[i-1];
		}
		//show(a)
		int ans = a[k-1];
		int ind = 0;
		for(int i=k;i<n;i++){
		    int temp = a[i]-a[i-k];
		    //here(temp,i-k,i, ans)
		    if(ans>a[i]-a[i-k]){
		        ans=a[i]-a[i-k];
		        // since sum till i-k is removed the first element will be i-k+1 in 0 based indexing
		        ind = i-k+1;
		    }
		    //ans = min(ans, a[i]-a[i-k])
		}
		//ans in 1 based indexing
		cout << ind+1 << endl;


	}
	printclock
}
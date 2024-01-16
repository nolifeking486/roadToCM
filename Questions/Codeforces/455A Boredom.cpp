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
//PURE DP
//the idea is to just ignore the ak+1 element and only look at ak and ak-1 element
//because for any element ak, there will be 2 cases
//either we delete it or not
//if we delete it then the overall max points upto ak will points from deleting ak and points till ak-2
//since deleting ak will also result in deletion of ak-1 whose points will be lost
//Now for elements greater than ak, we will do the same analysis which will lead us to the correct solution
//IMPLEMENTATION
//we calculate the frequency of each element first and then do dp on that since we are deleting all occurences

//--------------------------------------------------------------------
//ITERATIVE
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
		int N = *max_element(all(a));
		int freq[N+1];
		memset(freq,0,sizeof(freq));
		for(auto child:a){
		    freq[child]++;
		}
		int dp[N+1];
		memset(dp,0,sizeof(dp));
		dp[1]=freq[1];
		dp[2]=max(dp[1],freq[2]*2);
		for(int i=3;i<N+1;i++){
		    dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
		}
		cout << dp[N] << endl;



	}
	printclock
}

//----------------------------------------------------------------------------------------
//RECURSIVE
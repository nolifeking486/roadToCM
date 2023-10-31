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
int inf = -(1e+18);
ld pi = 3.1415926536;
const int N = 1e+5 + 3;
const int _N = 2e+6 + 3;
//-------------------------------------------------------------------|
 
//pattern, maths
//with every row the number of elements added are also 
//to row number
// so we can calculate distance from the last element of the 
// row
// we need to handle direction also
 
 
int32_t main()
{
	fastio()
	int test = 1;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int t;
		int row=1;
		for(int i=1;i<10001;i++){
		     t = i*(i+1)/2;
		    if(t>n){
		        row=i;
		        break;
		    }
		}
		if((row-1)*row/2==n){
		    row--;
		}
		int offset = abs(n-(row*(row+1)/2));
		int num= 0;
		int den = 0;
		if(row%2!=0){
		    offset = row-offset-1;
	    }
		    num = row-offset;
		    den = 1+offset;

		cout<< "TERM "<< n <<" IS " << num << "/" << den << endl;
	}
	printclock
} 
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
// Stack, Implementation

// trucks are permutation of 1 to n
// so keep a counter for truck which has come in correct order
// otherwise perform stack operations
// Dont keep pushing onto stack, check while pushing if current element to push
// is smaller than top else ans will never be possible


//-----------------------------------------------
int32_t main()
{
	fastio()
        
	int n;
	while(1){
	    cin >> n;
	    if(n==0){
	        break;
	    }
	    vector<int>a(n);
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    stack<int>q;
	    int ans = 1;
	    
	    for(int i=0;i<n;){
	        if(a[i]==ans){
	            ans++;
	            i++;
	        }
	        else{
	            //q.push(a[i]);
	            if(q.empty()){
	                q.push(a[i]);
	                i++;
	                continue;
	            }
	            if(q.top()==ans){
	                q.pop();
	                ans++;
	            }
	            else{
	                if(q.top()>a[i]){
	                    q.push(a[i]);
	                    i++;
	                }
	                else{
	                    break;
	                }
	            }
	        }
	    }
	    //cout << ans << endl;
	    while(!q.empty()){
	        //cout << q.top() << endl;
	        if(q.top()==ans){
	            q.pop();
	            ans++;
	        }
	        else{
	            break;
	        }
	    }
	    
	    if(ans-1==n){
	        cout << "yes" << endl;
	        continue;
	    }
	    cout << "no" << endl;
	}
	printclock
}
#include <bits/stdc++.h>
using namespace std;
//
// brute force ,maths
// basic ap formula
//
int main() {
	// your code goes here
	long long int t;
	cin >> t;
	
	while(t--){
	    long long int x,y,s;
	    cin >> x >> y >>s;
	    long long int d;
	    long long int a;
	    long long int n = 2*s/(x+y);
	    d = (x-y)/(5-n);
	    a=x-2*d;
	    cout << n <<endl;
	    for(int i=1;i<=n;i++){
	        cout << a+(i-1)*d << " ";
	    }
	    cout << endl;
	    
	    
	}
	return 0;
} 
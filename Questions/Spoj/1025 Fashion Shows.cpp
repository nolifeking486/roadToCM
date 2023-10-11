#include <bits/stdc++.h>
using namespace std;

//--------------------------------
// brute force
// sort to reorder so that maximum are adjacent
// problem statement little misleading,
// need to sort before taking product and sum
//-----------------------------

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int n;
		cin >> n;
		vector<int>x(n,0);
		vector<int>y(n,0);
		for(int i=0;i<n;i++){
			cin >> x[i];
		}
		for(int i=0;i<n;i++){
			cin >> y[i];
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=x[i]*y[i];
		}
		cout << sum << endl;
	}
	return 0;
}
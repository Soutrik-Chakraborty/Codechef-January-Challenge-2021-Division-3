#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

//algorithm for returning minimum value with long long data type
ll min(ll sum, int d) {
	return (sum<d?sum:d);
}

void solve() {
	int n, k, d;
	cin >> n >> k >> d;
	ll sum=0;
	//get the sum of all the problems and divide by 'k' to get the number of contests (days), 
	//since one contest can only be hosted per day
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		sum += a;
	}
	// check the minimum value between the contests available and the total days
	cout << min(sum/k, d) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
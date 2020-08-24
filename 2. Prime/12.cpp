#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k) {
	vector<int> v;
	while(n % 2 == 0) {
		v.push_back(2);
		n /= 2;
	}
	for(int i=3; i*i<=n; i+=2) {
		while(n % i == 0) {
			v.push_back(i);
			n /= i;
		}
	}
	if(n > 2) v.push_back(n);
	if(k > v.size()) return -1;
	return v[k-1];
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		cout << solve(n, k) << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; long long k;
		cin >> n >> k;
		long long p = n/k;
		int res = (k*(k-1)/2)*p + n*(n+1)/2;
		cout << (res == k ? 1 : 0) << endl;
	}
	return 0;
}


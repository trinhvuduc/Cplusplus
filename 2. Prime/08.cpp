#include<bits/stdc++.h>
using namespace std;

int solve(int n, int p) {
	int ans = 0;
	// ans = = n/p + n/(p^2) + n/(p^3) + ....
	while(n) {
		n /= p;
		ans += n;
	}
	return ans;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, p; cin >> n >> p;
		cout << solve(n, p) << endl;
	}
	return 0;
}


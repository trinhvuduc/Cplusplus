#include<bits/stdc++.h>
using namespace std;

int M = 1e9 + 7;

long long C(long long n, long long k) {
	long long dp[k+1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(long long i=1; i<=n; i++) {
		for(long long j=min(i, k); j>0; j--) {
			dp[j] = (dp[j] + dp[j-1]) % M;
		}
	}
	return dp[k];
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, r; cin >> n >> r;
		cout << C(n, r) << endl;
	}
	return 0;
}


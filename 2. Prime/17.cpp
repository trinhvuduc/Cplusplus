#include<bits/stdc++.h>
using namespace std;

int solve(long long l, long long r) {
	long long root = sqrt(r);
	bool prime[root+5];
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i=2; i*i<=root; i++) {
		if(prime[i]) {
			for(int j=i*i; j<=root; j+=i)
				prime[j] = false;
		}
	}
	int cnt = 0;
	for(int i=l; i<=root; i++)
		if(prime[i])
			cnt++;
	return cnt;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long l, r; cin >> l >> r;
		cout << solve(l, r) << endl;
	}
	return 0;
}


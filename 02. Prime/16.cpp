#include<bits/stdc++.h>
using namespace std;

int solve(long long n) {
	int root = sqrt(n);
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
	for(int i=2; i<=root; i++)
		if(prime[i])
			cnt++;
	return cnt;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}

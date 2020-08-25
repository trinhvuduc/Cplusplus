// WA
#include<bits/stdc++.h>
using namespace std;

bool prime[1000005];
void sieve(int n) {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i=2; i*i<=n; i++) {
		if(prime[i]) {
			for(int j=i*i; j<=n; j+=i)
				prime[j] = false;
		}
	}
}

int main() {
	sieve(200000);
	int t = 1;
//	cin >> t;
	ios::sync_with_stdio(false); cin.tie(0);
	while(t--) {
		int a, b; cin >> a >> b;
		for(int i=a; i<=b; i++) {
			if(prime[i])
				cout << i << " ";
		}
	}
	return 0;
}

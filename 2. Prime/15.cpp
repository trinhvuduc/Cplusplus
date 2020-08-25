#include<bits/stdc++.h>
using namespace std;

int prime[int(1e5+5)];

void sieve(int n) {
	memset(prime, 0, sizeof(prime));
	prime[1] = 1;
	for(int i=2; i<=n; i++) {
		if(prime[i] == 0) {
			prime[i] = i;
			for(int j=2*i; j<=n; j+=i)
				if(prime[j] == 0)
					prime[j] = i;
		}
	}
}
int main() {
	sieve(10001);
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i=1; i<=n; i++)
			cout << prime[i] << " ";
		cout << endl;
	}
	return 0;
}


// Nguyen to cung nhau
#include<bits/stdc++.h>
using namespace std;

bool prime[int(1e5+5)];

void sieve(int n) {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i=2; i*i<=n; i++)
		if(prime[i])
			for(int j=i*i; j<=n; j++)
				prime[j] = false;
}
int main() {
	sieve(100001);
	int t = 1;
	cin >> t;
	while(t--) {
		int x; cin >> x;
		int t = 0;
		for(int i=1; i<=x; i++)
			if(__gcd(x, i) == 1)
				t++;
		cout << prime[t] << endl;
	}
	return 0;
}


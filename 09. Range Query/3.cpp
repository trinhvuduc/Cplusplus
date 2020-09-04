#include<bits/stdc++.h>
using namespace std;

bool prime[100005];

void sieve(int n) {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i=2; i*i<=n; i++) 
		if(prime[i])
			for(int j=i*i; j<=n; j+=i)
				prime[j] = false;
}

int main() {
	sieve(100001);
	int t = 1;
	cin >> t;
	while(t--) {
		int l, r; cin >> l >> r;
		int cnt = 0;
		for(int i=l; i<=r; i++)
			if(prime[i])
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}


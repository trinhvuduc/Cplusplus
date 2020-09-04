#include<bits/stdc++.h>
using namespace std;

bool prime[int(1e6+5)];

void sieve(int n) {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i=2; i*i<=n; i++)
		if(prime[i])
			for(int j=i*i; j<=n; j+=i)
				prime[j] = false;
}
void capNguyenTo(int n) {
	for(int i=2; i<=n; i++)
		if(prime[i] && prime[n-i]) {
			cout << i << " " << n-i << endl;
			return;
		}
	cout << "-1\n";
}
int main() {
	sieve(1000001);
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		capNguyenTo(n);
	}
	return 0;
}


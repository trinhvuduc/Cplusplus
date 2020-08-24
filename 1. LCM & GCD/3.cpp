#include<bits/stdc++.h>
using namespace std;

int M = 1e9+7;

long long power(long long n, int k) {
	if(k == 0) return 1;
	long long x = power(n, k/2);
	if(k%2==0) return x*x%M;
	return ((n*x%M)*x)%M;    // chia du
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, a[65]; cin >> n;
		long long h=1;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			h = h*a[i]%M;   // chia du
		}
		int g = a[0];
		for(int i=1; i<n; i++)
			g = __gcd(g, a[i]);
		cout << power(h, g) << endl;
	}
	return 0;
}


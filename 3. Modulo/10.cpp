#include<bits/stdc++.h>
using namespace std;

int n, x, a[2005];
int M = 1e9 + 7;

// Honer's method 2x^3 – 6x^2 + 2x – 1 = ((2x – 6)x + 2)x – 1.
long long solve() {
	long long ans = a[0];
	for(int i=1; i<n; i++)
		ans = ans*x%M + a[i];
	return ans;
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
	    memset(a, 0, sizeof(a));
		cin >> n >> x;
		for(int i=0; i<n; i++) cin >> a[i];
		cout << solve() << endl;
	}
	return 0;
}

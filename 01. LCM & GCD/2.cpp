#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		long long ans = 1;
		for(long long i=1; i<=n; i++)
			ans = (ans*i) / __gcd(ans, i);
		cout << ans << endl;
	}
	return 0;
}


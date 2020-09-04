#include<bits/stdc++.h>
using namespace std;

int n, a[1000005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		long long ans = INT_MIN, sum = 0;
		for(int i=0; i<n; i++) {
			sum += a[i];
			ans = max(ans, sum);
			if(sum < 0)
				sum = 0;
		}
		cout << ans << endl;
	}
	return 0;
}


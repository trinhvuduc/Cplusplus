#include<bits/stdc++.h>
using namespace std;

int n, a[1005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		int ans = INT_MAX;
		for(int i=0; i<n-1; i++)
			for(int j=i+1; j<n; j++)
				ans = min(ans, abs(a[i]-a[j]));
		cout << ans << endl;
	}
	return 0;
}


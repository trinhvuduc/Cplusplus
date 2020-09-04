#include<bits/stdc++.h>
using namespace std;

int n, a[1005], b[1005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		int ans = 0;
		for(int i=0; i<n; i++) {
			int sum1 = 0, sum2 = 0;
			for(int j=i; j<n; j++) {
				sum1 += a[j];
				sum2 += b[j];
				if(sum1 == sum2)
					ans = max(ans, j-i+1);
			}
		}
		cout << ans << endl;
	}
	return 0;
}


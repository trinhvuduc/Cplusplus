#include<bits/stdc++.h>
using namespace std;

int n, k, a[100005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		long long cnt = 0;
		for(int i=0; i<n-1; i++) {
			int id = upper_bound(a, a+n, a[i] + k - 1) - a;
			cnt += 1LL*(id - i - 1);
//			cout << cnt << " " << i << " " << id << endl;
		}
		cout << (cnt > 0 ? cnt : 0) << endl;
	}
	return 0;
}

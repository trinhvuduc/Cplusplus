#include<bits/stdc++.h>
using namespace std;

int n, a[100005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		long long sum1 = a[0];
		long long sum2 = 0;
		for(int i=1; i<n; i++) {
			long long tmp = max(sum1, sum2);
			sum1 = sum2 + a[i];
			sum2 = tmp;
		}
		cout << max(sum1, sum2) << endl;
	}
	return 0;
}

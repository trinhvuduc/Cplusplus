#include<bits/stdc++.h>
using namespace std;

int n, k, a[int(1e6+5)];

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		cout << a[k-1] << endl;
	}
	return 0;
}


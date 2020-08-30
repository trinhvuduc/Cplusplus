#include<bits/stdc++.h>
using namespace std;

int n, x, a[1000005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		cout << (binary_search(a, a+n, x) ? 1 : -1) << endl;
	}
	return 0;
}


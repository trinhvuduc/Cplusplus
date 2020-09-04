#include<bits/stdc++.h>
using namespace std;

int l, r, n, q, a[1005];

int sum(int l, int r) {
	int s = 0;
	for(int i=l; i<r; i++)
		s += a[i];
	return s;
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> q;
		for(int i=0; i<n; i++)	cin >> a[i];
		while(q--) {
			cin >> l >> r;
			cout << sum(l-1, r) << endl;
		}
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int n, a[int(1e7)+5];

void solve() {
	sort(a, a+n);
	for(int i=1; i<n; i++)
		if(a[i] != a[0]) {
			cout << a[0] << " " << a[i] << endl;
			return;
		}
	cout << "-1\n";
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		solve();
	}
	return 0;
}


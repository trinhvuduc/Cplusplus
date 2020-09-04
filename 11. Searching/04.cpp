#include<bits/stdc++.h>
using namespace std;

int n, x, a[int(1e5+5)];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		int ans;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			if(a[i] == x)
				ans = i + 1;
		}
		cout << ans << endl;
	}
	return 0;
}


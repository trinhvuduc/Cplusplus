#include<bits/stdc++.h>
using namespace std;

int n, m, a[1000005], b[1000005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		cout << 1LL*(*max_element(a, a+n)) * (*min_element(b, b+m)) << endl;
	}
	return 0;
}


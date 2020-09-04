#include<bits/stdc++.h>
using namespace std;

int n, x, a[100005];

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		bool check = false;
		for(int i=0; i<n; i++) {
			if(binary_search(a, a+n, a[i]+x)) {
				check = true;
				break;
			}
		}
		cout << (check ? 1 : -1) << endl;
	}
	return 0;
}


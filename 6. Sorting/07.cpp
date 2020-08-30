#include<bits/stdc++.h>
using namespace std;

int n, a[1000005], b[1000005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int l, r;
		for(int i=0; i<n; i++)
			if(a[i] != b[i]) {
				l = i;
				break;
			}
		for(int i=n-1; i>=0; i--)
			if(a[i] != b[i]) {
				r = i;
				break;
			}
		cout << l+1 << " " << r+1 << endl;
	}
	return 0;
}


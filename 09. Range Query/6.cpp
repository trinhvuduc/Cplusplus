#include<bits/stdc++.h>
using namespace std;

int a[1005], c[1005], n;

int dp(int a[], int c[], int n) {
	int res = 1;
	for(int i=0; i<n; i++) {
		c[i] = a[i];
		for(int j=0; j<n; j++) {
			if(a[j] < a[i])
				c[i] = max(c[i], c[j] + a[i]);
		}
		res = max(res, c[i]);
	}
	return res;
}
int main() {
	int t; cin >> t;
	while(t--) {
		memset(a, 0, sizeof(a));
		memset(c, 0, sizeof(c));
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> a[i];
		cout << dp(a, c, n) << endl;;
	}
	return 0;
}

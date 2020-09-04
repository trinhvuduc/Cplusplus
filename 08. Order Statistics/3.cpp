#include<bits/stdc++.h>
using namespace std;

int n, k, a[10005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n*n; i++)
			cin >> a[i];
		sort(a, a+n*n);
		cout << a[k-1] << endl;
	}
	return 0;
}


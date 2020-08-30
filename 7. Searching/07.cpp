#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n, greater<int>());
		for(int i=0; i<k; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}


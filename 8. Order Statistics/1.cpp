#include<bits/stdc++.h>
using namespace std;

int n, k, a[100005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n; i++)
			cin >> a[i];
		sort(a, a+n);
		cout << a[k-1] << endl;
	}
	return 0;
}


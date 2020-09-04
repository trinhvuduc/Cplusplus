#include<bits/stdc++.h>
using namespace std;

int a[1000006];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		for(int i=0; i<n*k; i++) cin >> a[i];
		sort(a, a+n*k);
		for(int i=0; i<n*k; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}


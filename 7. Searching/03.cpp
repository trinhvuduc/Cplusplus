#include<bits/stdc++.h>
using namespace std;

int n, a[int(1e5+5)];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		long long sum = 0;
		for(int i=0; i<n-1; i++) {
			cin >> a[i];
			sum += a[i];
		}
		cout << n*(n+1)/2 - sum << endl;
	}
	return 0;
}


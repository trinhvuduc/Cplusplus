#include<bits/stdc++.h>
using namespace std;

int n, a[1005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		for(int i=0; i<n/2; i++)
			cout << a[n-i-1] << " " << a[i] << " ";
		if(n % 2 != 0)
			cout << a[n/2];
		cout << endl;
	}
	return 0;
}


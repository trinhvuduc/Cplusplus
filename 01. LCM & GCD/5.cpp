#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long a, x, y;
		cin >> a >> x >> y;
		long long n = __gcd(x, y);
		for(int i=0; i<n; i++) // in ra n lan so a
			cout << a;
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long a, b;
		cin >> a >> b;
		cout << (a*b) / __gcd(a, b) << " " << __gcd(a, b) << endl;
	}
	return 0;
}


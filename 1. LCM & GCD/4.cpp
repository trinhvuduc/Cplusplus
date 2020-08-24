#include<bits/stdc++.h>
using namespace std;

long long bienDoiB(long long a, string b) {
	long long mod = 0;
	// 2586%11 = (2000+500+80+6)%11 = 1
	for(int i=0; i<b.length(); i++) {
		mod = (mod*10 + b[i] - '0')%a;
	}
	return mod;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long a;
		string b;
		cin >> a >>b;
		long long x = bienDoiB(a, b);
		cout << __gcd(a, x) << endl;
	}
	return 0;
}


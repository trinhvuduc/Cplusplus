#include<bits/stdc++.h>
using namespace std;

long long f[93];

void tienSuly() {
	f[0] = 0;
	f[1] = f[2] = 1;
	for(int i=3; i<=93; i++)
		f[i] = f[i-1] + f[i-2];
}

int main() {
	tienSuly();
	int t = 1;
	cin >> t;
	while(t--) {
		long long n; cin >> n;
		cout << (binary_search(f, f+93, n) ? "YES" : "NO") << endl;
	}
	return 0;
}


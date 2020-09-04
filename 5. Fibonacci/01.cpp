#include<bits/stdc++.h>
using namespace std;

int m = 1e9+7;
long long f[1005];

void tienSuly() {
	f[0] = 0;
	f[1] = f[2] = 1;
	for(int i=3; i<=1000; i++)
		f[i] = (f[i-1]%m + f[i-2]%m)%m;
}

int main() {
	tienSuly();
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}


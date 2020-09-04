#include<bits/stdc++.h>
using namespace std;

void solve(long long n) {
	int dem = 0;
	while(n % 2 == 0) {
		n /= 2;
		dem++;
	}
	if(dem) cout << 2 << " " << dem << " ";
	dem = 0;
	for(int i=3; i<=sqrt(n); i+=2) {
		while(n % i == 0) {
			n /= i;
			dem++;
		}
		if(dem) {
			cout << i << " " << dem << " ";
			dem = 0;
		}
	}
	if(n > 2)
		cout << n << " 1";
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long n; cin >> n;
		solve(n);
		cout << endl;
	}
	return 0;
}

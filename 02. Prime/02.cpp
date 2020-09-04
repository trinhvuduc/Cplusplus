#include<bits/stdc++.h>
using namespace std;

long long solve(long long n) {
	int ans = 0;
	while(n % 2 == 0)
		n /= 2;
	ans = 2;
	for(int i=3; i<=sqrt(n); i+=2) {
		while(n % i == 0) {
			n /= i;
			ans = i;
		}
	}
	if(n > 2)
		return n;
	return ans;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}


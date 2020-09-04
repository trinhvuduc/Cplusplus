#include<bits/stdc++.h>
using namespace std;

bool prime[10005];
vector<int> v;
void sieve(int n) {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i=2; i<=n; i++) {
		if(prime[i]) {
			v.push_back(i);
			for(int j=2*i; j<=n; j+=i)
				prime[j] = false;
		}
	}
//	for(int i=0; i<v.size(); i++) cout << v[i] << " ";
}
bool solve(int n) {
	int cnt = 0;
	for(int i=0; i<v.size(); i++) {
		if(n%v[i]==0) {
			cnt++;
			n /= v[i];
		}
		if(cnt==3 && n == 1)
			return 1;
	}
	return 0;
}

int main() {
	sieve(10001);
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

bool prime[100005];
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
}
int tongChuSo(int n) {
	int s = 0;
	while(n) {
		s += n%10;
		n /= 10;
	}
	return s;
}
int tongUoc(int n) {
	int res = 0;
	int i=0;
	while(n != 1) {
		if(n % v[i] == 0) {
			n /= v[i];
			res += tongChuSo(v[i]);
		}
		else i++;
	}
	return res;
}

int main() {
	sieve(100001);
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		if(!prime[n]) {
			int sum1 = tongUoc(n);
			int sum2 = tongChuSo(n);
			cout << ((sum1 == sum2) ? "YES" : "NO" ) << endl;
		}
		else cout << "NO\n";
	}
	return 0;
}


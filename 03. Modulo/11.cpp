#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a, b, c;

ll mul(ll a, ll b) {
	if(b == 1) return a;
	ll x = mul(a, b/2);
	if(b % 2 == 0)
		return 2*x%c;
	return (a + 2*x%c)%c;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		cout << mul(a, b) << endl;
	}
	return 0;
}


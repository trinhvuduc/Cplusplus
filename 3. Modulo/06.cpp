#include<bits/stdc++.h>
using namespace std;

string a;
long long b, M;

long long modulo(string a, long long b) {
	long long mod = 0;
	for(int i=0; i<a.length(); i++)
		mod = (mod*10 + a[i] - '0') % M;
	return mod;
}
long long power(long long a, long long b) {
	if(b == 1) return a;
	long long x = power(a, b/2);
	if(b % 2 == 0)
		return x*x%M;
	return (a*x%M)*x%M;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> a >> b >> M;
		long long newA = modulo(a, b);
		cout << power(newA, b) << endl;
	}
	return 0;
}

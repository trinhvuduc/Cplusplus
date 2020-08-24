#include<bits/stdc++.h>
using namespace std;

long long lcm(long long x, long long y, long long z) {
	long long ans = (x*y)/__gcd(x, y);
	return (ans*z)/__gcd(ans, z);
}
long long find(int x, int y, int z, int n) {
	long long bsnn = lcm(x, y, z);
	long long num = pow(10, n-1);
	long long phandu = num % bsnn;
	if(phandu == 0) 
		return num;
	num += bsnn - phandu;
	if(num < pow(10, n))
		return num;
	return -1;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		cout << find(x, y, z, n) << endl;
	}
	return 0;
}


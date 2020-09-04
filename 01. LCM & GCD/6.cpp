#include<bits/stdc++.h>
using namespace std;

bool solve(long long n, long long m) {
	// sum = sum_1 + sum_2
	// m = sum_1 - sum_2 lay tuyet doi
	long long sum = (n * (n+1))/2;
	long long sum_1 = (sum + m)/2;
	long long sum_2 = sum - sum_1;
	if(sum_1 + sum_2 == sum && sum_1 - sum_2 == m)
		return __gcd(sum_1, sum_2) == 1;
	return false;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long n, m;
		cin >> n >> m;
		cout << (solve(n, m) ? "Yes" : "No") << endl; 
	}
	return 0;
}


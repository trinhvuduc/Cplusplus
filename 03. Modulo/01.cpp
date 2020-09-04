#include<bits/stdc++.h>
using namespace std;

int x, y, p;

long long power(int x, int y) {
	if(y == 1) return x;
	long long a = power(x, y/2);
	if(y % 2 == 0)
		return a*a%p;
	return ((x*a)%p)*a%p;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> x >> y >> p;
		cout << power(x, y) << endl;
		cout << x << " " << y;
	}
	return 0;
}


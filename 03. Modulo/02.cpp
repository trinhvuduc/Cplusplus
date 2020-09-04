#include<bits/stdc++.h>
using namespace std;

int solve(int a, int m) {
	for(int i=1; i<=m-1; i++) {
		if(a*i % m == 1)
			return i;
	}
	return -1;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int a, m;
		cin >> a >> m;
		cout << solve(a, m) << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, k;
		map<int, int> m;
		cin >> n >> k;
		for(int i=0, x; i<n; i++) {
			cin >> x;
			m[x]++;
		}
		cout << (m[k] == 0 ? -1 : m[k]) << endl;
	}
	return 0;
}


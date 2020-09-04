#include<bits/stdc++.h>
using namespace std;

int n;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int dau = INT_MAX, cuoi = INT_MIN;
		cin >> n;
		set<int> s;
		for(int i=0, x; i<n; i++) {
			cin >> x;
			dau = min(dau, x);
			cuoi = max(cuoi, x);
			s.insert(x);
		}
		cout << (cuoi - dau + 1) - s.size() << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int n, a[(int)1e6+5];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		set<int> s;
		int i=0;
		for(; i<n; i++) {
			if(s.find(a[i]) != s.end())
				break;
			else
				s.insert(a[i]);
		}
		cout << (i == n ? -1 : a[i]) << endl;
	}
	return 0;
}


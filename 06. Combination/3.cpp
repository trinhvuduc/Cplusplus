#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) v[i] = i+1;
		do {
			for(int i=0; i<n; i++)	cout << v[i];
			cout << " ";
		} while(next_permutation(v.begin(), v.end()));
		cout << endl;
	}
	return 0;
}


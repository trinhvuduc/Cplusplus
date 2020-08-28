#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<bool> v(n);
		for(int i=0; i<k; i++) v[i] = 1;
		do {
			for(int i=0; i<n; i++) {
				if(v[i])
					cout << i+1;
			}
			cout << " ";
		} while(prev_permutation(v.begin(), v.end()));
		cout << endl;
	}
	return 0;
}


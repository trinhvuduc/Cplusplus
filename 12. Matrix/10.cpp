#include<bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int r[105], c[105];
		cin >> n >> m;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				int x; cin >> x;
				if(x == 1) {
					r[i] = 1;
					c[j] = 1;
				}
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(r[i] == 1 || c[j] == 1)
					cout << "1 ";
				else
					cout << "0 ";
			}
			cout << endl;
		}
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, zero = 0;
		cin >> n;
		for(int i=0; i<n; i++) {
			long long x;
			cin >> x;
			if(x == 0) zero++;
			else cout << x << " ";
		}
		for(int i=0; i<zero; i++)
			cout << "0 ";
		cout << endl;
	}
	return 0;
}


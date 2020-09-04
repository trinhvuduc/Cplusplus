#include<bits/stdc++.h>
using namespace std;

int n, a[10000005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> a[i];
		cout << *max_element(a, a+n) << endl;
	}
	return 0;
}


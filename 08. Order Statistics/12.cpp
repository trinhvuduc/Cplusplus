#include<bits/stdc++.h>
using namespace std;

int n, a[1000005];

int find() {
	for(int i=1; i<=n; i++) {
		if(a[i] == 0)
			return i;
	}
	return n+1;
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		memset(a, 0, sizeof(a));
		cin >> n;
		for(int i=0, x; i<n; i++) {
			cin >> x;
			if(x > 0 && x <= n)
				a[x] = 1;
		}
		cout << find() << endl;
	}
	return 0;
}


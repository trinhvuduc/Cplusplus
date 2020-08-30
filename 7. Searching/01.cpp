#include<bits/stdc++.h>
using namespace std;

int n, x, a[1000005];

int find(int x) {
	for(int i=0; i<n; i++)
		if(a[i] == x)
			return i+1;
	return -1;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		for(int i=0; i<n; i++) cin >> a[i];
		cout << find(x) << endl;
	}
	return 0;
}


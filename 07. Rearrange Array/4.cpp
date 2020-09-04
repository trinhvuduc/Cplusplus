#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n) {
	sort(a, a+n);
	int chan = 0;
	int le = (n%2==0 ? n/2: n/2+1);
	for(int i=0; i<n; i++) {
		if(i % 2 == 1)
			cout << a[le++] << " ";
		else
			cout << a[chan++] << " ";
	}
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n, a[1005];
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		solve(a, n);
		cout << endl;
	}
	return 0;
}


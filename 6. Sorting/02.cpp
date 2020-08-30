#include<bits/stdc++.h>
using namespace std;

int n, x, a[100005];

bool cmp(int a, int b) {
	return abs(a-x) < abs(b-x);
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		for(int i=0; i<n; i++) cin >> a[i];
		stable_sort(a, a+n, cmp);
		for(int i=0; i<n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}


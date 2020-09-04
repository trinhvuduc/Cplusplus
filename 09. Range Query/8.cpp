#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		memset(a, 0, sizeof(a));
		cin >> n >> k;
		for(int i=0; i<n; i++) cin >> a[i];
		long long l, r, tb = INT_MIN;
		for(int i=0, j; i<n-k+1; i++) {
			long long sum = 0;
			for(j=i; j<i+k; j++)
				sum += a[j];
			if(sum > tb) {
				tb = sum;
				l = i;
				r = j-1;
			}
		}
//		cout << endl << l << " " << r << endl;
		for(int i=l; i<=r; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}


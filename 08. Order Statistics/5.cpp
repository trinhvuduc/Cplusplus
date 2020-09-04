#include<bits/stdc++.h>
using namespace std;

int n, a[1005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		int ans = 0;
		for(int i=0; i<n-1; i++)
			for(int j=i+1; j<n; j++)
				if(a[j] > a[i])
					ans = max(ans, a[j]-a[i]);
		cout << (ans > 0 ? ans : -1) << endl;
	}
	return 0;
}


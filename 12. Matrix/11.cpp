#include<bits/stdc++.h>
using namespace std;

/*
	Input:
		0 1 0 1 0
		0 1 0 1 1
		1 1 0 1 0
	Step 1:
		0 1 0 1 0
		0 2 0 2 1
		1 3 0 3 0
	Step 2:
		1 1 0 0 0
		2 2 1 0 0
		3 3 1 0 0
	Step 3:
		Find max
*/

int m, n, a[20][20], b[20][20];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int x;
		cin >> m >> n;
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];
		
		for(int i=0; i<n; i++) {
			b[0][i] = a[0][i];
			for(int j=1; j<m; j++)
				b[j][i] = (a[j][i] == 0) ? 0 : b[j-1][i]+1;
		}
		
		for(int i=0; i<m; i++) 
			sort(b[i], b[i]+n, greater<int>());
		
		int curr = 0, ans = 0;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				curr = (j+1) * b[i][j];
				ans = max(ans, curr);
			}
		}
		cout << ans << endl;
	}
	return 0;
}


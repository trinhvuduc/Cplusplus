#include<bits/stdc++.h>
using namespace std;

int m, n, k, a[105][105];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> m >> n >> k;
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];
		int row = 0, col = 0;
		vector<int> v;
		while(row < m && col < n) {
			for(int i=col; i<n; i++)
				v.push_back(a[row][i]);
			row++;
			for(int i=row; i<m; i++)
				v.push_back(a[i][n-1]);
			n--;
			if(row < m) {
				for(int i=n-1; i>=col; i--)
					v.push_back(a[m-1][i]);
			}
			m--;
			if(col < n) {
				for(int i=m-1; i>=row; i--)
					v.push_back(a[i][col]);
			}
			col++;
		}
		cout << v[k-1] << endl;
	}
	return 0;
}


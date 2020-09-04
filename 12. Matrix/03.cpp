#include<bits/stdc++.h>
using namespace std;

int n, m, a[105][105];

void print() {
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cout << a[i][j];
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> m >> n;
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];
		int row = 0, col = 0;
		while(row < m && col < n) {
//			if (row + 1 == m || col + 1 == n) 
//				break; 
			for(int i=col; i<n; i++)
				cout << a[row][i] << " ";
			row++;
			for(int i=row; i<m; i++)
				cout << a[i][n-1] << " ";
			n--;
			if(row < m) {
				for(int i=n-1; i>=col; i--)
					cout << a[m-1][i] << " ";
			}
			m--;
			if(col < n) {
				for(int i=m-1; i>=row; i--)
					cout << a[i][col] << " ";
			}
			col++;
		}
		cout << endl;
	}
	return 0;
}


#include <bits/stdc++.h> 
using namespace std; 

int m, n, mat[105][105];

void rotatematrix(int m, int n) {
	int row = 0, col = 0; 
	int prev, curr;
	while (row < m && col < n) {
		if (row + 1 == m || col + 1 == n) 
			break; 
		prev = mat[row + 1][col]; 
		for (int i = col; i < n; i++) { 
			curr = mat[row][i]; 
			mat[row][i] = prev; 
			prev = curr; 
		} 
		row++; 
		for (int i = row; i < m; i++) { 
			curr = mat[i][n-1]; 
			mat[i][n-1] = prev; 
			prev = curr; 
		} 
		n--; 
		if (row < m) { 
			for (int i = n-1; i >= col; i--) { 
				curr = mat[m-1][i]; 
				mat[m-1][i] = prev;
				prev = curr; 
			} 
		} 
		m--; 
		if (col < n) { 
			for (int i = m-1; i >= row; i--) { 
				curr = mat[i][col]; 
				mat[i][col] = prev; 
				prev = curr; 
			} 
		} 
		col++; 
	}
}
void print(int m, int n) {
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++) 
			cout << mat[i][j] << " ";
} 
int main() { 
	int t; cin >> t;
	while(t--) {
		cin >> m >> n;
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				cin >> mat[i][j];
		rotatematrix(m, n);
		print(m, n);
		cout << endl;
	}
	return 0; 
} 


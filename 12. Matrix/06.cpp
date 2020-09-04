#include<bits/stdc++.h>
using namespace std;

int n, a[105][105];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(i == 0 || j == 0 || i == n-1 || j == n-1)
					cout << a[i][j] << " ";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
	return 0;
}


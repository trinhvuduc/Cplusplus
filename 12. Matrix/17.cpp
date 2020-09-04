#include<bits/stdc++.h>
using namespace std;

int n, k, a[25][25], sum = 0;
vector<int> v;

void Try(int i, int j, int sum) {
	if(i == n-1 && j == n-1) {
		v.push_back(sum);
		return;
	}
	if(i+1 < n) {
		Try(i+1, j, sum + a[i+1][j]);
	}
	if(j+1 < n) {
		Try(i, j+1, sum + a[i][j+1]);
	}
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		v.clear();
		cin >> n >> k;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];
		Try(0, 0, a[0][0]);
		int ans = 0;
		for(int i=0; i<v.size(); i++)
			if(v[i] == k)
				ans ++;
		cout << ans << endl;
	}
	return 0;
}


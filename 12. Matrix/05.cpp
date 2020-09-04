#include<bits/stdc++.h>
using namespace std;

int n, a[105][105];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		int sumRow[105] = {0}, sumCol[105] = {0}, maxSum = 0;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++) {
				cin >> a[i][j];
				sumRow[i] += a[i][j];
				sumCol[j] += a[i][j];
				maxSum = max(maxSum, max(sumRow[i], sumCol[j]));
			}
		int cnt = 0, i = 0, j = 0;
		while(i < n && j < n) {
			int diff = min(maxSum - sumRow[i], maxSum - sumCol[j]);
			
			sumRow[i] += diff;
			sumCol[j] += diff;
			cnt += diff;
			
			if (sumRow[i] == maxSum) 
            	i++;
       		if (sumCol[j] == maxSum) 
            	j++; 
		}
		cout << cnt << endl;
	}
	return 0;
}


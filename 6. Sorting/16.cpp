#include<bits/stdc++.h>
using namespace std;

int n, a[100005], b[100005];

bool cmp(int x, int y) {
	if(b[x] == b[y])
		return x < y;
	return b[x] > b[y];
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		memset(b, 0, sizeof(b));
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			b[a[i]]++;
		}
		sort(a, a+n, cmp);
		for(int i=0; i<n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
 
int n, a[10000005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) a[i] = -1;
		for(int i=0; i<n; i++) {
			long long x;
			cin >> x;
			if(x>=0 && x <=10000000)  a[x] = x;
		}
		for(int i=0; i<n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int n, a[100005];

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		memset(a, 0, sizeof(a));
		cin >> n;
		int zero = 0;
		vector<int> v;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) {
			if(a[i] == 0) {
				zero++;
				continue;
			}
			if(a[i] == a[i+1]) {
				a[i+1] = 0;
				v.push_back(a[i]*2);
			}
			else v.push_back(a[i]);
		}
		for(int i=0; i<v.size(); i++)
			cout << v[i] << " ";
		for(int i=0; i<zero; i++)
			cout << "0 ";
		cout << endl;
	}
	return 0;
}


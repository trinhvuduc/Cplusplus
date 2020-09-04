#include<bits/stdc++.h>
using namespace std;

string s[100005];

bool cmp(string a, string b) {
	string ab = (a += b);
	string ba = (b += a);
	return ab.compare(ba) > 0;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i=0; i<n; i++) cin >> s[i];
		sort(s, s+n, cmp);
		for(int i=0; i<n; i++)
			cout << s[i];
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

string s; int k;

int main() {
//	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> s >> k;
		bool a[26] = {0};   // mang danh dau
		for(int i=0; i<s.length(); i++)
			a[s[i] - 'a'] = true;
		int cnt = 0;
		for(int i=0; i<26; i++)
			if(!a[i]) cnt++;
		cout << (cnt <= k) << endl;
	}
	return 0;
}


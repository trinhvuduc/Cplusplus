#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		int c[26] = {0}, sum = 0;
		for(int i=0; i<s.length(); i++) {
			if('0' <= s[i] && s[i] <= '9')
				sum += s[i] - '0';
			else
				c[s[i] - 'A']++;
		}
		for(int i=0; i<26; i++) 
			while(c[i]--)
				cout << (char)('A' + i);
		cout << sum << endl;
	}
	return 0;
}


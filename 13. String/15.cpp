#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		int cnt = 0;
		for(int i=0; i<s.length(); i++)
			for(int j=i; j<s.length(); j++)
				if(s[i] == s[j])
					cnt++;
		cout << cnt << endl;
	}
	return 0;
}


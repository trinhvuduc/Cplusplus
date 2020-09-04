#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		int ans = 0, sum = 0;
		for(int i=0; i<s.length(); i++) {
			if('0' <= s[i] && s[i] <= '9')
				sum = 10*sum + s[i] - '0'; 
			else {
				ans += sum; 
				sum = 0;
			}
		}
		if(sum > 0)
			ans += sum;
		cout << ans << endl;
	}
	return 0;
}


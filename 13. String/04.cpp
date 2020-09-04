#include<bits/stdc++.h>
using namespace std;

string s;

int solve(int k) {
	int cnt = 0;
	for(int i=0; i<s.length(); i++) {
		int n = 0;
		for(int j=i; j<s.length(); j++) {
			n = (10*n + s[j] - '0')%k;
			if(n == 0)
				cnt++; 
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> s;
		cout << solve(8) - solve(24) << endl;
	}
	return 0;
}


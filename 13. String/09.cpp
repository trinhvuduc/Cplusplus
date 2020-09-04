#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		vector<int> v;
		int sum = 0;
		for(int i=0; i<s.length(); i++) {
			if('0' <= s[i] && s[i] <= '9')
				sum = 10*sum + s[i] - '0'; 
			else {
				v.push_back(sum);
				sum = 0;
			}
		}
		if(sum > 0)
			v.push_back(sum);
		cout << *max_element(v.begin(), v.end()) << endl;
	}
	return 0;
}

